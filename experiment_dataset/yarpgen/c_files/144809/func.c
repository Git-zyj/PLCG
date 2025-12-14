/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144809
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
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_6)) % (min((((/* implicit */unsigned int) ((((-682246100) + (2147483647))) >> (((((/* implicit */int) var_8)) - (33)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967285U)))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_22 -= ((/* implicit */unsigned short) min((1597561331), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (signed char)51))))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) 1597561331))));
                var_24 = ((/* implicit */unsigned char) ((unsigned int) ((int) max((18446744073709551604ULL), (arr_4 [i_0] [(unsigned short)9])))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [10LL] = ((/* implicit */unsigned long long int) arr_3 [i_4 + 3]);
                            arr_14 [(_Bool)0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) max((arr_12 [i_1] [i_4] [i_4 + 1] [i_4 + 2] [11U]), (arr_12 [i_0] [i_0] [i_4 - 2] [i_4 - 1] [i_4]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) 2);
                            var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min(((unsigned char)165), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) (signed char)-124)))))))), (((((/* implicit */_Bool) min((2347806776U), (((/* implicit */unsigned int) (signed char)-50))))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_2] [i_3])), (7025263047050558909ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0)))))))));
                            var_27 = ((/* implicit */signed char) max((((545294487) | (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))), (((((arr_5 [i_5] [i_3] [i_1]) + (2147483647))) << (((((arr_5 [i_0] [i_1] [i_2]) + (1488240558))) - (12)))))));
                        }
                        arr_18 [i_3] [13U] [i_0] = ((/* implicit */_Bool) 9223372036850581504LL);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) ((((9188813556330421106LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4788)) >> (((/* implicit */int) (unsigned char)9)))))));
                        arr_22 [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6 + 1])) < (((/* implicit */int) arr_3 [i_6 + 1]))));
                    }
                    arr_23 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((max((7025263047050558909ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [2U] [i_1] [i_2] [i_2])) <= (((/* implicit */int) (signed char)104))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((11030483980951087785ULL) < (((/* implicit */unsigned long long int) arr_0 [i_2]))))) >> (((((((/* implicit */int) arr_17 [i_1] [i_1] [10ULL] [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned char)148)))) - (137))))))));
                }
            }
        } 
    } 
}
