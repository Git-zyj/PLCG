/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155103
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 &= ((/* implicit */unsigned char) min((arr_3 [i_0]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (2595172043U))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_1] [i_3] = ((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2] [i_0 + 2]);
                        var_15 = ((((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 + 2]))) <= ((-(arr_3 [i_3 - 1]))));
                        var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)1)));
                    }
                } 
            } 
            var_17 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1]))))));
        }
        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_18 = min(((~(min((((/* implicit */unsigned int) arr_1 [(unsigned short)3] [i_4])), (1699795255U))))), (((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)1)), (arr_2 [(unsigned char)2] [(unsigned char)2]))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))))));
            arr_14 [i_0] [i_4] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) min((arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 1]), (arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 1])))), ((-(((/* implicit */int) arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 1]))))));
            arr_15 [i_0] [i_0] [i_0 - 4] = ((/* implicit */signed char) max(((~(arr_8 [i_0] [i_0] [i_0 + 2] [i_0 + 1]))), (min(((+(13045691923199044813ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_13 [(unsigned char)10] [i_4])) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) (-(max((8863587877399746492ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            var_20 = ((/* implicit */int) arr_13 [i_0] [i_0]);
        }
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max(((!(((/* implicit */_Bool) (-(4294967293U)))))), ((_Bool)1))))));
        var_22 = (~((-(min((arr_3 [i_0 - 2]), (((/* implicit */long long int) (unsigned char)241)))))));
        arr_19 [i_0 - 3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (short)19419))))) ? (((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)0))))))));
        var_23 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (((((/* implicit */_Bool) min((arr_12 [i_0 - 4] [(unsigned char)6]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) 24U)) ? (((/* implicit */unsigned long long int) 1816495251U)) : (2199023255520ULL))))));
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6]);
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_7])))))));
        arr_27 [i_7] [i_7] = (((!((!(((/* implicit */_Bool) (unsigned char)248)))))) ? (arr_25 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_25 [i_7]), (((/* implicit */unsigned int) arr_20 [10ULL] [i_7]))))))))));
    }
    var_25 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)87))))) != (-1536567400126916142LL)));
    var_26 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    var_27 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39745))) : (var_4))), (((/* implicit */long long int) (~(var_6))))))));
}
