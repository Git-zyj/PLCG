/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154592
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
    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(-5715373989726281229LL))))) * (((/* implicit */long long int) var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [5U] [i_0] = ((/* implicit */long long int) ((var_6) != (var_7)));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (short)15623))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) 5715373989726281228LL))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */short) arr_8 [i_3] [i_2]);
                                var_14 = ((/* implicit */short) min((15940491342669505385ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1]))))));
                                arr_18 [i_1] [i_2] [i_1] [i_5 + 1] [i_5 - 1] [i_3] [6] = ((/* implicit */short) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)60384))))) == ((-(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49820)) < ((((-(((/* implicit */int) arr_11 [(_Bool)1] [i_1])))) % (((/* implicit */int) (signed char)24))))));
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned char) (short)-27272);
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1])))) * (((/* implicit */int) max(((unsigned short)7743), (((/* implicit */unsigned short) arr_8 [i_1] [2])))))));
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_21 [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_21 [i_6])))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (-5715373989726281216LL))))))));
        var_18 -= ((/* implicit */signed char) -5715373989726281229LL);
    }
    var_19 = ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_5)))) && ((_Bool)1)));
    var_20 |= ((/* implicit */signed char) max((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5152))))) & (var_5))), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)49820))))))));
    var_21 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (short)-27272)))), (((/* implicit */int) var_8))));
}
