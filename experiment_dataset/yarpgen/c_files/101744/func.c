/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101744
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
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 += ((/* implicit */signed char) ((arr_0 [i_0]) << (((((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (((long long int) var_7)))) - (1558309207LL)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 8; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(arr_7 [i_0] [i_0] [i_0] [i_3]))), ((+(arr_7 [i_0] [i_1] [i_1] [i_0])))))) ? ((~(((/* implicit */int) arr_14 [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 2] [i_3] [i_3])))) : (((int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_4 - 2] [(signed char)5] [i_4])))))));
                            var_19 = ((/* implicit */signed char) (((((-(((/* implicit */int) ((_Bool) arr_10 [i_0] [8] [8] [i_2] [i_3] [i_4 - 3]))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((-7499409571940325954LL), (((/* implicit */long long int) -1301894225))))))))));
                            var_20 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) (signed char)-59)))) : (((/* implicit */int) (signed char)31))));
                            var_21 = ((/* implicit */_Bool) (-((-(var_11)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5])) % (max((var_7), (((/* implicit */int) arr_18 [i_5]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_5]))))) : ((+(arr_19 [i_5] [i_5])))));
        var_23 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_17 [i_5])) >> (((/* implicit */int) arr_17 [i_5]))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_7))));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_6])))))));
        arr_22 [i_6] = ((/* implicit */short) var_0);
    }
    var_26 = ((/* implicit */int) (-(((unsigned int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((unsigned int) var_16)))))), (var_12)));
}
