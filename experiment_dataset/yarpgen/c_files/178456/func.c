/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178456
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))));
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_4] |= ((/* implicit */int) (!(((/* implicit */_Bool) max((-4074594078690258143LL), (((/* implicit */long long int) (unsigned short)37790)))))));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_3 - 4])), (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 13124810544920614837ULL)) || ((!(((/* implicit */_Bool) (signed char)-31))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            }
                        } 
                    } 
                    var_14 = ((unsigned short) ((arr_10 [i_0] [i_2 - 1] [i_1 - 1] [(signed char)16] [i_1]) ? (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_1 - 3] [(unsigned short)6] [(unsigned short)9])) : (((/* implicit */int) var_8))));
                    var_15 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) ^ (arr_9 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0]))) : (((((/* implicit */_Bool) (short)5891)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) max(((unsigned short)51836), (((/* implicit */unsigned short) (_Bool)1))))) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                        arr_15 [5LL] [i_1] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] = ((/* implicit */short) var_7);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_18 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_1 - 3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_2 - 1] [i_1 - 2] [i_5 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(arr_1 [i_1 + 1]))))));
                        }
                        arr_19 [(signed char)15] [i_0] [i_1] [i_2 + 2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16786299633762322199ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 17782363887181991472ULL))))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) (+(arr_16 [i_0] [i_0] [i_0] [(signed char)7])));
        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) -6120177967478821820LL));
    }
}
