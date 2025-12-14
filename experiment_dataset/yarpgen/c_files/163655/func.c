/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163655
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
    var_20 = ((/* implicit */_Bool) (short)13935);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = (unsigned short)35081;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */int) var_11)) | (((/* implicit */int) (signed char)-112))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12676029672667181432ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3 + 2]))) : (-323309297816508872LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) arr_1 [i_0 - 1] [i_3]))))) : (arr_5 [i_0 + 1])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13593))) | (15400386639424361150ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)14323))))) : (9543574215130814154ULL)));
                                var_25 ^= ((((/* implicit */_Bool) ((short) var_2))) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3 + 1])));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [1] [i_1] [7] [i_5] [i_6] = ((/* implicit */int) var_5);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                            {
                                var_26 = ((/* implicit */short) ((1256958311374980118LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                                arr_26 [i_0 - 1] [(unsigned short)0] = ((/* implicit */unsigned int) (_Bool)0);
                                var_27 = ((/* implicit */unsigned short) var_19);
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                            {
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_4)));
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (var_4) : (var_12)))) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_2)))))));
                            }
                            arr_30 [i_0] [i_6] = ((/* implicit */short) 12612585183331109374ULL);
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)6749))));
                        }
                    } 
                } 
            }
        } 
    } 
}
