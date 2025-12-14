/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133602
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))))) ? (((((((/* implicit */_Bool) 380753284U)) && (((/* implicit */_Bool) -152907094)))) ? (var_3) : (max((212636612), (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_1))));
    var_11 = ((/* implicit */short) (~(max((((/* implicit */int) var_8)), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_8))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) 554775591953511195LL)) ? (((/* implicit */int) (short)-2180)) : (1229531847)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    for (int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (arr_6 [i_3 - 3] [0])))))) ? (min((1675699156U), (2339964130U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1786753194)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)2442)))) : (((/* implicit */int) (short)341))))))))));
                            var_13 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_4 - 2] [i_4 + 1]) == (((/* implicit */unsigned long long int) -1275081073)))))) & (max((arr_12 [i_3] [i_3] [i_3 - 2] [i_0] [i_4 - 1]), (var_5)))));
                            var_14 -= ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_2)))))) : (arr_7 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) arr_10 [i_3 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 2]))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [0ULL] [i_4] = ((((/* implicit */_Bool) 7318594460351652050ULL)) ? (((/* implicit */long long int) 380753284U)) : (-2748452013899518876LL));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) <= (var_3))))));
            arr_15 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [8ULL] [8ULL] [20U] [i_1] [i_0])) || (((/* implicit */_Bool) 3036741867U)))) ? (((/* implicit */long long int) 471287535)) : (((arr_4 [13LL] [i_1] [(signed char)18]) | (((/* implicit */long long int) 1275081072)))))))));
        }
        var_15 = ((/* implicit */unsigned int) ((((long long int) -4564081425864177116LL)) <= (min((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) 3331267247U)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 804100036U)) <= (arr_5 [14LL]))))))));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 4; i_6 < 14; i_6 += 2) 
        {
            for (unsigned int i_7 = 4; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    {
                        arr_26 [i_5] [i_6] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_8] [i_6] [i_5])) ? (arr_23 [i_5] [i_8 - 1]) : (((/* implicit */long long int) var_6)))))));
                        var_16 = ((/* implicit */int) arr_17 [i_8 - 1]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_6 [i_5] [i_5]))));
        arr_27 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1779164264)), (min((-4197926940740813370LL), (((/* implicit */long long int) 804100042U))))))) ? (((/* implicit */long long int) 1508095185)) : (max((arr_7 [i_5] [16] [i_5] [i_5]), (((((/* implicit */_Bool) (signed char)-46)) ? (-1488324262127817909LL) : (((/* implicit */long long int) 976542786U))))))));
    }
    for (int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */unsigned int) max((-7388049575277315550LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 725577704U)) ? (arr_0 [i_9]) : (((/* implicit */int) arr_3 [i_9] [i_9] [i_9])))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_5 [i_9])))))) <= (max((var_5), (((/* implicit */long long int) ((var_9) < (var_5)))))))))));
        var_19 = ((((/* implicit */unsigned long long int) arr_28 [i_9] [4])) & (((9132210407422335625ULL) | (((/* implicit */unsigned long long int) (~(arr_6 [i_9] [12U])))))));
    }
    for (int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [i_10])) ? (((1897716434U) * (((/* implicit */unsigned int) arr_0 [i_10])))) : (arr_1 [i_10]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-4754)) && (((/* implicit */_Bool) 501189216U))))))));
        var_21 = ((/* implicit */int) (_Bool)1);
        var_22 = ((/* implicit */signed char) arr_12 [(signed char)15] [22LL] [15U] [i_10] [i_10]);
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */int) ((var_9) / ((~(7388049575277315562LL)))));
                        var_25 = ((/* implicit */unsigned int) ((_Bool) 1228758598896392009LL));
                        var_26 = (i_10 % 2 == 0) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_10] [i_11] [i_11] [i_10] [i_13 + 2]) << (((min((var_0), (((/* implicit */unsigned long long int) var_8)))) - (254252318565037231ULL))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_12 [i_10] [i_11] [i_11] [i_10] [i_13 + 2]) + (9223372036854775807LL))) << (((min((var_0), (((/* implicit */unsigned long long int) var_8)))) - (254252318565037231ULL)))))))));
                    }
                }
            } 
        } 
    }
}
