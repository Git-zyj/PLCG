/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157797
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */_Bool) ((signed char) ((short) var_11)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) (-(((unsigned int) (short)-26290))));
        arr_2 [18LL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1773551405609634362ULL)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (unsigned short)65535))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) % (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)56301)) == (((/* implicit */int) var_1))))) : (((var_16) ? (((/* implicit */int) (unsigned short)9232)) : (((/* implicit */int) var_16))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? ((+(-1149119399807367987LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)18]))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) (~(max((1817399258U), (((/* implicit */unsigned int) (unsigned short)65535))))));
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)56235)))))))));
        arr_8 [i_1] = ((/* implicit */short) (+(((unsigned int) ((unsigned long long int) 655858799U)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_24 |= ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) ((_Bool) arr_5 [i_1]))))));
                    var_25 = ((/* implicit */int) (((-((+(arr_9 [i_3] [i_1] [i_1]))))) - (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((unsigned long long int) arr_11 [i_5] [i_4])) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)205)) != (((/* implicit */int) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4)))))))))))));
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (((-(3639108496U))) > (((unsigned int) max((-1149119399807367979LL), (((/* implicit */long long int) (short)32752))))))))));
        }
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? ((~(15314452450492917651ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 19)) | (1175516555U))))));
        arr_20 [i_4] = ((/* implicit */int) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_4]))))), (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))));
        arr_21 [i_4] [i_4] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 16673192668099917252ULL)))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    }
    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((short) ((unsigned char) (!(((/* implicit */_Bool) var_7)))))))));
    var_31 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((655858814U), (((/* implicit */unsigned int) (unsigned short)64975))))))) ^ (((unsigned long long int) (~(5580073002217665094ULL))))));
}
