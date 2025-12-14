/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154433
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
    var_16 = min((max((((((/* implicit */int) var_13)) & (((/* implicit */int) var_0)))), (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)381)))))))), (max((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0)))), (((978892391) & (((/* implicit */int) (_Bool)0)))))));
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_13)), (max((max((((/* implicit */unsigned long long int) var_15)), (var_3))), (((/* implicit */unsigned long long int) min((var_1), (var_13))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) <= (((/* implicit */int) arr_0 [i_0]))))), (((unsigned long long int) (unsigned short)381)))));
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)65154)), (0U)));
            var_20 = ((/* implicit */signed char) min((((((var_7) >> (((((/* implicit */int) (unsigned short)10736)) - (10728))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_0)), (arr_1 [i_0]))))))), (((/* implicit */unsigned int) max(((unsigned short)10726), (((/* implicit */unsigned short) (_Bool)1)))))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) ((max((max((((/* implicit */unsigned long long int) var_8)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_2 [(unsigned char)5]))))))) <= (((((/* implicit */unsigned long long int) 1131228289222283634LL)) & (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))))))));
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) / (8077034807002903478LL)));
                        arr_13 [5] [i_0] [i_3] [5] [i_3] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        arr_16 [i_3] [i_0] [(short)4] = ((/* implicit */long long int) ((((int) min((16209336644805936421ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) & (((/* implicit */int) ((((((/* implicit */int) (signed char)107)) & (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (unsigned short)65154)))))));
                        var_23 = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)3)), ((unsigned char)155)));
                    }
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53031)) + (((/* implicit */int) var_6))))), (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((var_6), ((unsigned short)0)))))))));
                        var_25 -= ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((((/* implicit */int) var_1)) & (((/* implicit */int) (signed char)-1))))));
                        var_26 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) var_6))) && (((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0] [i_3]), (((/* implicit */unsigned char) var_0))))))) && (min((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))), (((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) var_13))))))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) <= (max((((((/* implicit */unsigned long long int) var_5)) & (var_10))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_11)))))))));
    var_28 &= ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)66)) <= (((/* implicit */int) (unsigned char)155))))))))));
}
