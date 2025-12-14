/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174538
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
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (var_0) : ((-(((/* implicit */int) (unsigned short)12424))))))), (((6530497869224405445LL) - (max((6530497869224405445LL), (((/* implicit */long long int) 1228391522U))))))));
    var_21 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 4026945655U))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-6313073454571542179LL))) == (((/* implicit */long long int) var_5))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((arr_3 [i_0] [(unsigned short)13]) % (((long long int) ((-6313073454571542170LL) <= (((/* implicit */long long int) -1185147741)))))));
        arr_5 [i_0] = ((int) (~((~(((/* implicit */int) (signed char)-103))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_2] [i_2] = ((/* implicit */short) (((~(var_17))) * (((/* implicit */long long int) ((/* implicit */int) ((var_0) == (((/* implicit */int) (unsigned char)16))))))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((6187414342126255081LL) - (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_0] [(signed char)6] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((long long int) arr_12 [i_2] [i_4 - 1] [i_0] [i_2]));
                            var_24 = ((long long int) var_12);
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) min((((((_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) / (6313073454571542169LL))) : (((/* implicit */long long int) ((/* implicit */int) ((16542943603659367055ULL) < (((/* implicit */unsigned long long int) var_3)))))))), (((/* implicit */long long int) ((unsigned short) arr_19 [i_0] [(signed char)15] [i_2] [i_3] [i_5])))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_11 [i_5] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_0 [i_5] [i_1])))))));
                            arr_21 [i_2] [i_1] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */signed char) 416539653U);
                            var_26 |= ((/* implicit */unsigned int) var_10);
                            var_27 += ((/* implicit */_Bool) (signed char)37);
                        }
                        arr_22 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (-((+(((/* implicit */int) (signed char)-56)))))));
                        arr_23 [i_0] [i_0] [i_2] [15LL] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2] [i_3]))))), (((short) arr_8 [i_1]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 3; i_6 < 12; i_6 += 2) 
    {
        var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20792)) + (arr_10 [(signed char)4] [i_6 - 1] [(signed char)4] [(signed char)4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1793734662)) : (arr_9 [i_6 - 3] [i_6] [i_6 - 3] [i_6 - 3])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_10 [16] [i_6] [6] [10LL])) : (var_2)))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2160708104U)) / (var_11)));
    }
}
