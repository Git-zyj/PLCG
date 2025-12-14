/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140021
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
    var_14 = var_11;
    var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51469))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551608ULL)) || (((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_1]);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_17 = (unsigned short)38750;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [14ULL] [10] [i_1] [i_0] = ((/* implicit */int) (+(arr_5 [i_0] [i_0 + 1] [i_0])));
                            var_18 = ((/* implicit */int) var_1);
                        }
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0 + 3])) <= (1133233586)));
                    }
                }
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (15LL))), (((/* implicit */long long int) ((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) != (((/* implicit */long long int) var_11)))))))) ? (min((var_1), (arr_5 [i_0] [i_0] [i_0]))) : ((((!(((/* implicit */_Bool) 1133233593)))) ? (((/* implicit */long long int) ((var_7) >> (((arr_4 [i_0] [14U] [i_1]) + (8725827342176475293LL)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0]))) : (arr_4 [i_0] [i_0] [16LL])))))));
                arr_14 [i_1] [i_0] [8ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_1] [(_Bool)1])) ? (arr_8 [i_0 - 1] [i_1] [i_1] [i_1] [i_1]) : (var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(-1133233579)))))) ? (min((var_12), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) (+((-(((int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 1133233578)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16)))))) : ((-((~(var_12)))))));
                arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) min((max((((((/* implicit */long long int) arr_1 [i_5])) | (var_12))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_5] [i_5]))))))), (((/* implicit */long long int) arr_6 [i_6] [i_6] [i_5]))));
            }
        } 
    } 
}
