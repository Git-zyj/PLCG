/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118787
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
    var_15 = ((/* implicit */_Bool) (~((((+(((/* implicit */int) var_10)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2441560486U)))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)27564)))) / ((+(((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53762)) || (var_10)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (var_4)));
        var_18 = ((/* implicit */signed char) max((min((-197405970), (((/* implicit */int) (short)-6167)))), ((+(((/* implicit */int) var_11))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) (~((+(((/* implicit */int) var_6))))))) & (min((-923284940291962752LL), (((/* implicit */long long int) (_Bool)1))))));
                    var_21 |= ((/* implicit */short) arr_8 [i_0] [i_0]);
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_7))))) : (var_1))))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 *= (+(((((/* implicit */int) (unsigned char)224)) & ((+(((/* implicit */int) (unsigned char)24)))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */int) min(((signed char)-94), (var_7)))) / ((-(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_18 [i_4]))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 |= ((/* implicit */unsigned short) var_14);
            var_27 += (((~(((/* implicit */int) var_10)))) | (((/* implicit */int) (unsigned char)9)));
            arr_21 [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)31))));
            /* LoopNest 2 */
            for (signed char i_6 = 3; i_6 < 11; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4]))))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (arr_23 [i_4] [i_4] [(signed char)10]) : (arr_23 [i_7] [i_7] [(signed char)6]))))));
                        arr_27 [i_4] [i_4] [i_7] [i_6 + 1] [i_6] = ((/* implicit */int) var_4);
                        var_30 = ((/* implicit */unsigned int) min((var_30), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 - 1]))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7]))) : (var_0)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_13))));
            arr_30 [i_4] [i_4] [i_4] = (_Bool)1;
        }
        var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) (_Bool)1))));
        var_33 = ((68719476735LL) >= (((/* implicit */long long int) arr_6 [i_4] [i_4] [i_4])));
        var_34 = ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_35 = ((/* implicit */signed char) (+(((/* implicit */int) arr_32 [i_9]))));
        var_36 = var_10;
    }
}
