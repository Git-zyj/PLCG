/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135906
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-106)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)-20)))) : (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) -5147006146028165370LL);
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = (_Bool)0;
                            arr_11 [(signed char)10] [i_3] [i_3] = -5551357430938221327LL;
                            arr_12 [i_0 + 2] [i_1] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -5551357430938221327LL)) ? (-6382830224433393318LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_21 = ((/* implicit */signed char) 8305993261697759207LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (_Bool)1))));
                            arr_23 [i_4] [i_4] [9LL] [i_5] [i_6 + 1] = (signed char)-33;
                        }
                        arr_24 [i_0 + 1] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
                var_22 = ((((/* implicit */_Bool) 336634056438408106LL)) ? (((((/* implicit */_Bool) (signed char)-34)) ? (-6338388790021884371LL) : (2332950693864949472LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) -2087650305448830988LL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)-74))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_38 [i_8] [i_7] [(signed char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (6423359435487158198LL)));
                        var_24 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)71))));
                        var_25 = ((/* implicit */_Bool) 5551357430938221311LL);
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-63)) ? (-3746914413062474835LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_39 [i_7] [i_8] [i_9 + 1] [i_10] = (signed char)-73;
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) -294599204704502424LL)) ? (-1499903235939256868LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_40 [i_7] [i_8] [i_8] = ((/* implicit */signed char) 6876736591663309944LL);
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] = -5442059508233721868LL;
        arr_44 [i_11] = (_Bool)0;
        var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)23)) ? (((((/* implicit */_Bool) -927557437060426374LL)) ? (7675130211910510940LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)71))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))))) : ((((_Bool)1) ? (67092480LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6311835796043021134LL)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (_Bool)1))))) ? (-5878585675235059693LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (_Bool)1))))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_30 = (signed char)86;
        arr_47 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7350375043889905319LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    var_31 = ((/* implicit */_Bool) max((var_31), (var_10)));
}
