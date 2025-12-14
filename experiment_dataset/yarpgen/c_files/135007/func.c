/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135007
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
    var_18 = ((/* implicit */_Bool) (signed char)-1);
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_13))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [7] [i_1] [i_0] [i_3] [i_1] [9U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_0] [i_1 - 1] [i_1] [i_3 - 1])) * ((-(((/* implicit */int) var_4))))));
                        arr_12 [i_0] [i_1 - 1] [(short)0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_16) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) -6994077546443443166LL)))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_15 [(signed char)0] [i_1 - 2] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 2] [i_1]))));
                        arr_16 [i_0] [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                        arr_17 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_0] [i_1] [9LL] [i_4])) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4])) - (51617))))) >> (((((/* implicit */int) var_10)) - (103)))));
                    }
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)1] [i_2]))))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_2))))))))));
                    arr_18 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_2]);
                    var_23 = ((/* implicit */unsigned short) (unsigned char)109);
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) ((((/* implicit */int) (signed char)38)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_15)))))))))))));
                    arr_22 [i_0] [i_1] [i_0] = min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1535244779462541624LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)97)))), (((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_1 - 2] [i_1] [i_5])))))), (arr_19 [i_5] [i_1] [i_1]));
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)245)) <= (((/* implicit */int) (signed char)-11)))) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                    arr_26 [i_6] [5LL] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_23 [i_0] [i_1 - 1] [i_0])))) ? (max((arr_23 [i_0] [i_1 - 1] [i_0]), (arr_23 [i_0] [i_1 - 1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)27945), (((/* implicit */unsigned short) (signed char)17))))))));
                    arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)15)), (arr_2 [i_0] [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_5 [i_0] [i_6] [i_6] [i_1 + 1]))))) : (max((((/* implicit */int) arr_20 [(signed char)9] [i_1 - 2] [i_6] [i_6])), (min((((/* implicit */int) (signed char)37)), (-1)))))));
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (signed char)-1))));
                }
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)10632))))))) >= (((((/* implicit */_Bool) (unsigned char)3)) ? (9178746607221943462ULL) : (((/* implicit */unsigned long long int) -1)))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (min((max((arr_23 [i_1] [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 5LL))))))), (((/* implicit */long long int) min(((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_0])))), (((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)6] [i_0] [i_1 - 2] [(unsigned char)1])))))))))))));
            }
        } 
    } 
}
