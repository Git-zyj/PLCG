/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18425
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 += -78950849;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((arr_15 [(unsigned char)11]) % (((int) min((arr_7 [i_1]), ((unsigned char)245))))))));
                                var_20 &= ((/* implicit */signed char) min((((unsigned char) (+(((/* implicit */int) var_15))))), (min((((/* implicit */unsigned char) arr_8 [i_1 + 2] [i_1])), ((unsigned char)0)))));
                                var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((int) arr_9 [i_0])) : (((/* implicit */int) (signed char)83))))));
                                var_22 = ((/* implicit */int) var_7);
                            }
                            for (signed char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_17) / (((((/* implicit */_Bool) 78950848)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)150))))))))))));
                                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) -550357216)) ? (125725215) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_2] [i_2] [i_1 + 3])), (arr_19 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 2] [i_1] [i_1 - 3] [i_1 + 2]))))))));
                                var_25 = ((/* implicit */int) (unsigned char)1);
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [(unsigned char)10] [i_1] [i_1] [i_3 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_12 [(unsigned char)9] [(unsigned char)11] [i_0] [i_3 - 2] [i_0])) : (((/* implicit */int) (unsigned char)150)))))));
                                arr_20 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [12] [12] [12])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)119))))))))));
                            }
                            for (signed char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                            {
                                var_27 = arr_12 [i_1 - 2] [i_1] [i_1 + 1] [(unsigned char)3] [i_1];
                                var_28 = ((/* implicit */unsigned char) max((var_28), (min((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))), (var_1))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_0])), (-1929517851)))))))))));
                                arr_23 [(signed char)8] [i_2] [i_2] [(signed char)8] [(signed char)8] = ((/* implicit */int) arr_10 [i_0]);
                            }
                            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((((/* implicit */int) (unsigned char)248)), (((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_18 [11] [i_2] [i_3 + 2] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)170)) < (((/* implicit */int) arr_0 [i_7]))))))))))));
                                arr_27 [i_2] = arr_25 [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(max((arr_17 [i_3] [i_3] [11] [i_1] [i_3 - 1]), (min((((/* implicit */int) arr_25 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_1])), (arr_17 [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_0]))))))))));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((unsigned char) (unsigned char)127)))));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)233)) : (var_12))) < (max((((/* implicit */int) (unsigned char)240)), (1642745271)))))), (((signed char) (signed char)-32)))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) min(((+((+(arr_17 [i_0] [i_0] [i_1] [(signed char)3] [8]))))), (max((((/* implicit */int) arr_2 [i_0])), (arr_11 [i_1] [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) var_14);
}
