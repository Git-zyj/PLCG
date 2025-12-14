/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11260
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((((int) var_15)) * (((/* implicit */int) ((_Bool) var_4)))))));
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [(short)23] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)41463))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)4287)) : (((/* implicit */int) (unsigned char)253)))) : ((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_21 ^= ((/* implicit */unsigned char) arr_0 [(_Bool)1]);
        arr_3 [(unsigned char)20] = (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24057)) ? (-1916227369) : (((/* implicit */int) (unsigned short)41463))))), (var_5))));
    }
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) ((((int) (-(((/* implicit */int) var_16))))) / ((+((+(((/* implicit */int) var_13))))))));
                    arr_13 [i_3] [2LL] &= ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((var_9) > (((/* implicit */int) (short)4255))))), ((unsigned char)31))))));
                    arr_14 [4U] [(_Bool)1] [(signed char)3] [i_1] = ((/* implicit */short) (-(((((var_1) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [4])) ? (-512) : (((/* implicit */int) var_7)))) + (530)))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 3; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_18 [6LL] [10LL] [(unsigned short)0] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)24077))))), (var_8)));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_3])) << (((-7672515360351439887LL) + (7672515360351439898LL))))) > (((/* implicit */int) min(((unsigned char)192), ((unsigned char)109)))))))));
                    }
                    for (short i_5 = 3; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        var_24 |= (signed char)-70;
                        arr_22 [9U] [i_1] [i_1] [1] = (signed char)59;
                        arr_23 [i_1] [9] [i_1] = ((/* implicit */signed char) ((((512) << (((arr_1 [i_1 + 1]) - (2305927134U))))) - ((~(((/* implicit */int) var_16))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((unsigned char) var_6))) >> (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)142)))))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 8; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 8; i_7 += 4) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)69))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4287)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned short)61249))))) : (var_5)))) ? (((/* implicit */int) (!((_Bool)0)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-4)), (var_8)))) ? (max((var_11), (((/* implicit */int) (_Bool)1)))) : (743281547)))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_16 [i_7] [i_6 - 3] [i_6 + 1] [i_6 + 2]))));
                }
            } 
        } 
        var_28 ^= ((/* implicit */_Bool) min(((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-18))) / (arr_24 [(unsigned char)0] [(unsigned char)0] [2U]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) var_16)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        arr_31 [3LL] = ((/* implicit */_Bool) (unsigned short)51878);
        arr_32 [9U] [(_Bool)1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_12) >> ((((((-2147483647 - 1)) - (-2147483630))) + (43)))))) ? (min((458752), (((/* implicit */int) (unsigned short)18749)))) : (max((var_12), (var_9)))))));
        arr_33 [(unsigned char)12] = ((/* implicit */int) ((var_10) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_7), (var_0)))) : (((var_14) % (((/* implicit */int) arr_29 [(unsigned char)5])))))) - (65)))));
    }
}
