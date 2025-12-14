/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187283
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3225687644881727330ULL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned short)64082))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)1458))) + ((+(((/* implicit */int) ((unsigned char) arr_7 [i_0])))))));
                        arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned short) min((15221056428827824285ULL), (var_7))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_8 [i_0] [10ULL] [i_0] [10ULL] [i_0])))))))))));
                            var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_0 [i_0]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)16697)) : (((/* implicit */int) var_13)))))))));
                            var_19 = ((/* implicit */unsigned short) arr_7 [i_0]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || (arr_10 [i_0]))))));
                            arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_12)))))) : (((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [10] [i_0] [i_2]))))) : (arr_0 [i_2])))));
                            var_21 = ((/* implicit */unsigned long long int) (unsigned short)11959);
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((((/* implicit */_Bool) 3225687644881727341ULL)) && (((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_2])))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((unsigned short) arr_6 [i_0] [i_0]))))))))))));
                            arr_23 [0ULL] [i_6] = ((/* implicit */int) var_14);
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) arr_10 [(_Bool)1]);
                        }
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((long long int) (unsigned short)16697))), (max((var_7), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3]))))))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (11170570998370558013ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0)))) : (min((4495047819383345981ULL), (((/* implicit */unsigned long long int) 25165824)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))))));
}
