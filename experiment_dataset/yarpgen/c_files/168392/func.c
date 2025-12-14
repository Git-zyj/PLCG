/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168392
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
    var_16 = var_8;
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (var_2)))) - ((~(((/* implicit */int) var_1))))))) || (((0) <= (((/* implicit */int) (unsigned short)17014))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) >= (((/* implicit */long long int) (-(0))))))) + (0))))));
                    var_19 *= max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_3 [i_0]))), (arr_3 [i_0]))), (((((/* implicit */_Bool) ((0) << (((((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) + (86)))))) ? (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [(_Bool)1] [i_2 - 2] [i_2 + 3])) : (max((arr_3 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)5] [i_0] [i_2 + 2])))))));
                    arr_8 [(short)10] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0] [i_2 + 4] [i_2])), (3981230202630885673LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 2] [i_2])) || (((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2 + 4])))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 2] [i_2 - 2] [i_2])) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned char)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [14LL] [i_2 + 1] [i_2 + 1])))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 3] [i_2 + 3]))) : (arr_5 [i_2] [i_2 - 1] [i_2] [i_2 + 4])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 4] [i_1] [i_2])) + (((/* implicit */int) arr_7 [i_2 + 4] [i_1] [i_2])))))));
                }
                for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                    arr_13 [i_0] [i_1] [18LL] = ((/* implicit */signed char) arr_0 [(unsigned short)6]);
                    /* LoopSeq 1 */
                    for (int i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        arr_16 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4 - 3])) == (((/* implicit */int) arr_9 [i_4] [i_4] [(_Bool)1] [i_4 - 1]))));
                        var_22 = (+(((((/* implicit */_Bool) ((-3981230202630885674LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [6])) ? (((/* implicit */int) var_13)) : (var_11)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (short i_6 = 3; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_21 [(short)8] [i_3] [(short)8] [(short)8] [i_3] = ((/* implicit */int) ((-4038204804600943862LL) * (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_6] [i_3 - 2] [i_6 + 1] [i_3 - 2] [i_1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) - (1285984115))))))))));
                                var_23 -= ((/* implicit */unsigned char) var_5);
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (20) : (((/* implicit */int) (signed char)97)))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_12);
                }
                var_25 = ((/* implicit */long long int) ((signed char) (short)18154));
                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((((/* implicit */int) (short)-18173)) < (((/* implicit */int) (signed char)26)))), (((var_14) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)144)), (9057833461350411321ULL)))))))));
                arr_23 [i_0] = ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_1] [(signed char)6]);
            }
        } 
    } 
    var_27 -= ((/* implicit */_Bool) 932231266);
}
