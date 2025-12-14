/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124093
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) var_11)))) | (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) min((var_10), (var_4)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)3)) ? (((((/* implicit */int) (signed char)-121)) % (((/* implicit */int) ((signed char) var_13))))) : (((((/* implicit */_Bool) max(((signed char)-69), ((signed char)27)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (signed char)12)) >> (((/* implicit */int) (signed char)15))))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (signed char)126)) >> (((((/* implicit */int) (signed char)-29)) + (38))))) : (((/* implicit */int) (signed char)-113)))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_3))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-50))))) ? (((/* implicit */int) max(((signed char)-15), ((signed char)29)))) : (((/* implicit */int) ((signed char) arr_2 [i_0 + 1])))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_0 - 1])) : (((/* implicit */int) min(((signed char)27), (arr_0 [i_0])))))) : (((/* implicit */int) min(((signed char)-12), ((signed char)-7)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (max((arr_0 [i_0]), (arr_0 [i_3])))));
                            arr_11 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])) + (128))) - (3)))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (signed char)89)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
                            var_20 += ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0] [i_2] [i_2] [i_2])) >= (((/* implicit */int) arr_2 [i_3])))) ? (((((/* implicit */int) arr_5 [i_3] [i_3])) - (((/* implicit */int) arr_2 [i_0 - 1])))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_3] [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_15 [i_0])) >> (((((/* implicit */int) (signed char)50)) - (42))))) : (((((/* implicit */int) (signed char)-78)) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_5] [i_0] [i_1])))))) | (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) ((signed char) (signed char)17)))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (arr_16 [i_0] [i_1] [i_0] [i_0])));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((signed char)97), ((signed char)3));
                        }
                    } 
                } 
            }
        } 
    } 
}
