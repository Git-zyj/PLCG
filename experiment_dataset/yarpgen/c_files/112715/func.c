/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112715
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)0))));
    var_14 = min(((signed char)15), (var_0));
    var_15 -= var_1;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 24; i_2 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)85))));
                var_17 = var_0;
            }
            for (signed char i_3 = 3; i_3 < 24; i_3 += 4) /* same iter space */
            {
                arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)15))));
                var_18 = (signed char)9;
            }
            var_19 |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-5)) | (((/* implicit */int) arr_10 [i_1]))));
            var_20 += (signed char)40;
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)56)) > (((/* implicit */int) (signed char)-1))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_22 = min((((signed char) min(((signed char)-1), (arr_18 [(signed char)16] [i_4] [i_5] [(signed char)16])))), (var_5));
                var_23 -= ((/* implicit */signed char) (~((-(((/* implicit */int) min(((signed char)-1), (var_10))))))));
                arr_20 [i_5] [(signed char)10] [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))));
                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) var_2)))))) : ((+(((/* implicit */int) ((signed char) (signed char)103)))))));
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
            {
                var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((signed char)51), ((signed char)0))))));
                /* LoopSeq 2 */
                for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-27)), (((((/* implicit */int) var_11)) + (((/* implicit */int) var_12))))))) ? (((((/* implicit */int) min((arr_7 [i_0] [(signed char)23] [i_6] [i_7]), (arr_17 [i_6] [(signed char)12] [(signed char)24] [i_7])))) + (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_4])) : (((/* implicit */int) arr_7 [i_4] [(signed char)22] [i_4] [i_4])))))) : (((/* implicit */int) var_12)))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [(signed char)18] [i_0] [i_4] [i_0] [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? ((+(((/* implicit */int) arr_17 [i_4] [i_7 - 1] [i_7] [i_7 + 2])))) : (((/* implicit */int) min((arr_26 [i_4] [i_4] [i_4] [(signed char)24] [i_6] [i_7 - 1]), ((signed char)3))))));
                    arr_29 [i_0] [i_4] [i_6] [i_6] = max((min((arr_24 [i_7 - 1]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)91)) < (((/* implicit */int) arr_21 [i_0]))))))), ((signed char)-9));
                    var_28 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_7 [i_7] [i_7] [i_7 + 3] [i_7])))), ((~(((/* implicit */int) var_7))))));
                    arr_30 [i_7 - 1] [i_4] [i_4] [i_0] = ((signed char) var_10);
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_29 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)36)) ^ (((/* implicit */int) var_8))))));
                    var_30 = arr_12 [(signed char)12] [i_8];
                    arr_34 [i_4] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) arr_25 [i_0] [i_0] [i_4] [i_6] [i_8] [(signed char)15])))) : ((~(((/* implicit */int) arr_10 [i_0])))))), (((((/* implicit */int) (signed char)1)) >> (((((/* implicit */int) var_8)) + (91)))))));
                }
            }
            for (signed char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) min((var_31), ((signed char)-108)));
                arr_37 [i_0] [i_4] [i_4] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_24 [i_0]))))));
                var_32 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_14 [i_9] [i_9] [i_9])) + (((/* implicit */int) ((signed char) arr_26 [i_9] [i_4] [i_4] [i_4] [i_0] [i_0])))))));
            }
        }
        var_33 = arr_16 [(signed char)24] [i_0] [(signed char)24];
        arr_38 [i_0] = (signed char)98;
        arr_39 [(signed char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-76)) + (2147483647))) << (((((/* implicit */int) var_12)) - (58))))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [(signed char)4])) : (((/* implicit */int) arr_32 [i_0] [i_0] [(signed char)12] [i_0]))))))) && (((/* implicit */_Bool) arr_19 [(signed char)14]))));
    }
    for (signed char i_10 = 2; i_10 < 15; i_10 += 4) 
    {
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (((~(((/* implicit */int) (signed char)0)))) % (((/* implicit */int) (signed char)-83)))))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_10 - 2])) || (((/* implicit */_Bool) var_7))))) | (((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)17), (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)40)))))))))))));
                    arr_50 [i_10] [i_11] [i_11] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) arr_23 [(signed char)4] [i_12] [i_12])) ? (((/* implicit */int) arr_15 [i_11] [(signed char)24])) : (((/* implicit */int) var_5))))))));
                }
            } 
        } 
    }
}
