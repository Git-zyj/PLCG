/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116844
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 877740454U)) > (arr_0 [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (3417226841U)));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_11 = (-(2112213330));
                        var_12 += ((/* implicit */unsigned int) arr_0 [i_3]);
                        var_13 = ((/* implicit */_Bool) (-(3417226841U)));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_3 + 1] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_3 + 1] [i_3 + 1] [i_3]))))) ? (((/* implicit */int) arr_2 [i_3 + 1] [i_3] [(unsigned char)19])) : (((/* implicit */int) arr_2 [i_3 + 1] [i_3] [i_3])))))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) (+(((877740459U) | (arr_5 [i_4] [i_4] [i_4])))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) 2014052178);
                        var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_6 + 3])))));
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-34))));
                    }
                } 
            } 
            arr_17 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_2))))));
        }
        for (int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((unsigned char) ((int) (unsigned short)16864)));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_7 [i_0]))));
        }
        for (signed char i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(short)6] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_10 [i_0] [i_8] [i_8 + 1]))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_15 [20] [i_8] [i_8] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_8] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)167)))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_20 [i_0] [(short)1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1902810309)))))) : (((arr_9 [i_0] [i_8 + 2]) ? (min((((/* implicit */unsigned int) var_9)), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) arr_6 [5] [5] [1U])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))))))))));
        }
        arr_23 [i_0] = ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [15U])) ? (((/* implicit */int) arr_16 [i_0] [19] [(signed char)9] [i_0] [i_0])) : (((/* implicit */int) (signed char)34)));
    }
    for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 4) 
    {
        var_23 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -1770398027)) : (1283072045U)))))))));
        var_24 = ((/* implicit */unsigned int) arr_22 [i_9] [i_9] [i_9]);
        var_25 = ((/* implicit */int) ((long long int) (unsigned short)31761));
        arr_26 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_9] [i_9] [i_9 - 2]))))) ? (arr_7 [i_9]) : (((/* implicit */unsigned int) min((arr_13 [i_9] [i_9] [i_9] [i_9 - 1]), ((+(((/* implicit */int) (signed char)34)))))))));
    }
    var_26 = var_5;
    var_27 += ((/* implicit */long long int) var_1);
    var_28 = ((/* implicit */unsigned int) var_0);
    var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((var_3) ? (3417226841U) : (((/* implicit */unsigned int) 770065686))))) ? (var_6) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) var_8))));
}
