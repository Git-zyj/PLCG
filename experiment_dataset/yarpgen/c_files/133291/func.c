/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133291
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_0)))))) ^ (((((/* implicit */_Bool) max(((unsigned short)4), (((/* implicit */unsigned short) (short)32746))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)0), (arr_1 [i_0 + 1]))))))));
        var_16 = ((/* implicit */short) min((((/* implicit */int) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_0 + 1]))))), (((((/* implicit */_Bool) -4998909854997324074LL)) ? (max((((/* implicit */int) arr_0 [(short)6] [i_0])), (var_3))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) <= (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_5 [i_1])))))) > (((((/* implicit */_Bool) 1050918562577385607LL)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)-48)))))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3938577683094110171LL)) ? (((/* implicit */int) ((_Bool) -1050918562577385602LL))) : (((/* implicit */int) arr_4 [i_1]))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) -1050918562577385602LL)) && (((/* implicit */_Bool) (unsigned short)40228)))) ? (((/* implicit */int) arr_4 [(short)15])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)55)) : (var_7))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_2])), (var_11)))) : (((((/* implicit */_Bool) -1024717186)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (11366533637650959996ULL))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((0ULL), (((((/* implicit */_Bool) arr_8 [i_2])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13239)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_2])))))))) : (((/* implicit */int) (((~(((/* implicit */int) (short)7618)))) == ((((_Bool)1) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (signed char)102)))))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_5 [i_4]);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (short)32752))) / (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) var_13)))) <= (((/* implicit */int) arr_5 [i_4]))))))))));
    }
    var_22 = (!(((/* implicit */_Bool) (unsigned char)156)));
    var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned char)255), ((unsigned char)247))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)65))))) ? ((~(((/* implicit */int) (unsigned char)250)))) : ((+(((/* implicit */int) (short)-18506)))))) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)1))))))));
}
