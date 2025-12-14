/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140479
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_0))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
            arr_7 [i_1] [8ULL] = ((/* implicit */signed char) 2147483647);
            var_16 = (+(2147483647));
            var_17 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)20])) ? (((unsigned long long int) (signed char)126)) : ((-(arr_2 [i_0] [i_0]))))));
            var_18 -= ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (min(((-2147483647 - 1)), (((/* implicit */int) (signed char)120)))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (2147483647) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~((+(((int) var_2))))));
            arr_10 [i_0 - 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */int) arr_8 [i_0] [i_0 + 1]);
        }
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((signed char)127), (((signed char) min((0ULL), (((/* implicit */unsigned long long int) (signed char)-1)))))));
        arr_12 [i_0] [i_0 - 1] = ((/* implicit */int) arr_5 [(signed char)1] [i_0 + 1]);
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_20 = min((max((arr_14 [i_3] [i_3]), (var_0))), (((/* implicit */unsigned long long int) (+(-1)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            arr_17 [i_4] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_3] [i_4 + 2]))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5])) ? (((2147483647) / (((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_19 [i_3] [i_4 - 1] [i_4] [i_3])) - (var_10)))));
                arr_20 [i_3] [i_4] [i_4 + 1] [i_3] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_4 - 1])) : (((/* implicit */int) arr_5 [i_5] [i_3])));
            }
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [9ULL])) ? (((/* implicit */int) arr_13 [1ULL] [i_4])) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3]))))) ? (arr_1 [i_4 + 2]) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_4)) : (var_9))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4 + 2] [i_3])) ? (arr_4 [i_3] [i_4 - 1]) : (arr_4 [i_3] [i_3])));
        }
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */int) min((arr_23 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) 2013265920)) >= (var_7)))))));
            var_25 ^= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6 + 2])) ? (((/* implicit */int) arr_8 [i_6 - 1] [i_6 + 2])) : (((/* implicit */int) arr_8 [i_6 - 1] [i_6 + 2])))));
            var_26 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_9 [i_6 - 1]))) != (((/* implicit */int) ((((/* implicit */int) arr_16 [(signed char)22] [i_6 + 2] [(signed char)22])) >= (((/* implicit */int) arr_16 [i_3] [i_6 + 2] [i_6])))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((((/* implicit */_Bool) min((var_2), (arr_3 [i_6])))) ? (((/* implicit */int) arr_16 [i_3] [i_6 + 1] [i_3])) : (((/* implicit */int) (signed char)116)))))))));
        }
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = var_3;
        /* LoopSeq 3 */
        for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
        {
            var_28 = ((/* implicit */signed char) ((min((2147483647), (((/* implicit */int) (signed char)-4)))) + (((((/* implicit */int) arr_5 [i_8 + 1] [i_7])) + (((/* implicit */int) arr_5 [i_8 - 1] [i_8]))))));
            var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_7])) ? ((+(2147483647))) : (((int) 1048575))))), (arr_4 [i_8] [i_7])));
            var_30 = ((/* implicit */unsigned long long int) arr_1 [i_7]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_31 = var_11;
            arr_33 [i_7] = ((/* implicit */signed char) min(((-((-(arr_2 [i_7] [i_7]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_16 [i_7] [9ULL] [10]))))), ((+(arr_27 [i_7])))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_25 [(signed char)16]))));
            var_33 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_13 [i_7] [i_9]))))));
        }
        for (int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            arr_36 [20] [20] |= ((/* implicit */int) ((signed char) -13));
            var_34 = (i_7 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((min((arr_30 [i_7] [i_7]), (var_14))) + (2147483647))) << (((((((/* implicit */_Bool) var_10)) ? (arr_27 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(signed char)11] [i_10] [i_7] [i_7]))))) - (4865981491946143088ULL))))) << (((min(((~((-2147483647 - 1)))), (min((var_10), (arr_34 [i_7] [i_7] [i_7]))))) - (57081360)))))) : (((/* implicit */unsigned long long int) ((((((((min((arr_30 [i_7] [i_7]), (var_14))) - (2147483647))) + (2147483647))) << (((((((((/* implicit */_Bool) var_10)) ? (arr_27 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(signed char)11] [i_10] [i_7] [i_7]))))) - (4865981491946143088ULL))) - (6081616099781243537ULL))))) << (((((min(((~((-2147483647 - 1)))), (min((var_10), (arr_34 [i_7] [i_7] [i_7]))))) - (57081360))) - (1378511445))))));
        }
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_41 [i_7] = ((/* implicit */unsigned long long int) arr_9 [i_7]);
            var_35 |= max((arr_4 [i_7] [i_11]), (((((/* implicit */_Bool) (+(arr_4 [i_7] [i_11])))) ? (((0ULL) + (((/* implicit */unsigned long long int) -2147483647)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1))))))));
            arr_42 [i_7] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(4)))), (arr_38 [11ULL] [i_7])));
        }
        var_36 = ((int) arr_4 [i_7] [i_7]);
    }
    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) var_4)) ? (arr_34 [i_12] [20ULL] [i_12]) : (((/* implicit */int) arr_39 [(signed char)10] [i_12] [i_12])))))), (((/* implicit */int) arr_39 [8ULL] [i_12] [i_12]))));
        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_12]))))))) || (((((((/* implicit */_Bool) -2147483637)) || (((/* implicit */_Bool) arr_23 [16] [16])))) && (((/* implicit */_Bool) ((unsigned long long int) 2147483647)))))));
    }
    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (var_11) : (var_12)))), (((((/* implicit */_Bool) var_2)) ? (var_6) : (var_3)))))))));
    var_39 |= (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_13)))) ? (((/* implicit */unsigned long long int) min((-5), (var_11)))) : (var_13))));
}
