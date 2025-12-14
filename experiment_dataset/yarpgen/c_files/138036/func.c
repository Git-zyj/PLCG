/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138036
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
    var_13 = ((/* implicit */unsigned short) ((unsigned int) var_0));
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [(unsigned short)3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [(unsigned short)8] [i_0])) : (((/* implicit */int) arr_0 [i_4])))), (((/* implicit */int) (_Bool)1))))) ? (min((max((((/* implicit */unsigned int) var_2)), (536878446U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_12 [i_1])))))))));
                                var_15 = ((/* implicit */unsigned int) min((-11), (((int) var_4))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_1 + 1] [7U])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_0])) : (var_4));
                    arr_16 [i_1] [6U] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(unsigned short)0] [(unsigned short)5])), (var_0)))) ? (((((/* implicit */_Bool) 4294967290U)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_1 + 1])))))));
                    var_16 &= ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])) : (var_5)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 468942875U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65523))))) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_0)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_2 + 2] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (3964407466U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) arr_1 [i_1] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                        arr_20 [i_0] [i_1] [8] = ((/* implicit */short) ((((/* implicit */int) (signed char)3)) | ((~(var_5)))));
                    }
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */_Bool) var_0);
    var_18 = ((/* implicit */int) var_12);
}
