/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180750
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2018839110721688341ULL)) ? (max((var_12), (3146930725597268734ULL))) : (var_10)))) ? (min((((/* implicit */unsigned long long int) var_15)), (var_12))) : (var_0));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [(unsigned char)7] [(unsigned char)7] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [3ULL] [i_1])), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0))), (((/* implicit */unsigned long long int) ((arr_3 [i_1 - 1] [i_1 - 2]) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])))))));
                var_18 -= ((/* implicit */unsigned char) arr_2 [i_0] [(_Bool)1]);
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((arr_0 [i_1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)98))))))), (((((/* implicit */_Bool) (unsigned char)32)) ? (14964676715606115143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_1 + 1] [i_0] [i_3] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) arr_9 [i_0] [i_0]);
                            arr_12 [3ULL] [15ULL] [i_2] [i_3] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_3])) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_8 [i_0] [i_2] [i_0] [i_3] [i_2])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    arr_17 [i_0] [i_1] [13ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 1])) ? (arr_9 [i_1 - 1] [i_1 + 1]) : (arr_9 [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_12))) ? (var_12) : (arr_9 [i_0] [i_4])))));
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_4 + 2] [i_4 + 2] [i_4 + 1]), (arr_10 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 2])))) ? (min((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (16710043746435503284ULL))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                    arr_19 [i_4 + 1] [i_1] |= max((min((arr_10 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4]), (min((((/* implicit */unsigned long long int) var_11)), (arr_7 [i_1] [i_0]))))), (((((var_0) != (arr_9 [(unsigned char)18] [(unsigned char)18]))) ? (min((arr_6 [i_0] [i_0] [12ULL]), (arr_10 [i_1 - 2] [10ULL] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned long long int) arr_1 [i_1 - 1]);
                                var_21 -= ((/* implicit */unsigned char) min((min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_6 - 1] [i_6 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_6] [i_6 + 1])) > (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))))))) < (var_12)));
}
