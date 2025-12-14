/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15498
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((var_12), (var_5))) < (((/* implicit */int) var_2)))))) % (min((var_18), (((/* implicit */unsigned int) (unsigned short)61904))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = max((((((/* implicit */_Bool) var_18)) ? (var_4) : (((/* implicit */int) var_2)))), ((-(((/* implicit */int) var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-((~((-(((/* implicit */int) (unsigned short)61912))))))));
        arr_4 [i_0] [i_0] = ((var_10) >= (((/* implicit */unsigned long long int) ((((var_18) == (((/* implicit */unsigned int) var_12)))) ? (var_14) : (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3644579633366069028ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) ((signed char) (unsigned short)65535))) : ((-(((/* implicit */int) (unsigned short)10207))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_17)))) || (((/* implicit */_Bool) max(((short)10519), ((short)28943))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) - (3909823468U)))) ? ((-(((/* implicit */int) var_19)))) : (var_0))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (~(min((((/* implicit */unsigned long long int) (~(var_7)))), (((unsigned long long int) var_19)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            var_21 = var_1;
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55300))) : (var_10)))));
                        }
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */int) var_15)) + (((/* implicit */int) var_1)))) + (((/* implicit */int) (short)-5457)))) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_15))))))));
                    }
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        var_24 ^= var_2;
                        var_25 ^= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (14802164440343482588ULL)))) ? (((min((var_7), (((/* implicit */int) (unsigned short)4)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(var_12)))) > (((var_8) >> (((var_17) - (15272140353557551699ULL)))))))));
                    }
                }
            } 
        } 
    }
}
