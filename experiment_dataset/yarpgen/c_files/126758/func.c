/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126758
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
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83))))) == (((/* implicit */int) arr_0 [i_0] [i_0 - 2])))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) min((arr_3 [i_0 - 3]), (((/* implicit */short) (unsigned char)6)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                arr_11 [i_0 + 1] [i_2 - 1] = min(((-(((((/* implicit */_Bool) 5708783984145943459ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_1] [i_2 - 1])) < (((/* implicit */int) arr_9 [i_2 - 1] [i_0])))) && (((/* implicit */_Bool) arr_10 [i_2 + 2] [i_0 + 2] [2] [i_0 + 2]))))));
                var_13 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((short) (unsigned char)82))) ? (((4146128448U) * (((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_2 - 1] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)60)) / (-1356256382)))))));
                var_14 ^= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 26388279066624LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (var_5))))), (min(((-(((/* implicit */int) arr_9 [i_0 - 2] [i_1])))), (((/* implicit */int) arr_1 [(unsigned char)3]))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(arr_9 [4ULL] [4ULL]))))));
            }
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) -1959335970))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned char) (signed char)-119)), ((unsigned char)210))), ((unsigned char)60)));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) + (var_10)))) ? (((-7885864109031872214LL) - (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)30486)), (17U)))))) : (arr_7 [i_0] [i_0] [(_Bool)1])));
            arr_14 [9U] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        arr_23 [i_0 - 2] [i_4 - 1] [(unsigned short)2] [i_4 - 1] [i_0 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_9 [i_0 - 2] [(_Bool)1])) : (((/* implicit */int) (unsigned char)90))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_4 + 2] [(unsigned char)2] [i_6 + 1])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned char)40)))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 3] [i_4 + 2] [i_6 + 1])) ? (((/* implicit */unsigned long long int) arr_15 [i_0 + 2] [i_4 + 1] [i_6 + 1])) : (14358310691212506922ULL)));
                    }
                } 
            } 
            arr_24 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [0ULL] [i_0 + 3] [0ULL] [i_4 - 3]))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned short i_8 = 3; i_8 < 6; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) (-(arr_22 [i_0] [i_0 - 2] [i_0 + 2] [i_9])));
                            var_22 = ((/* implicit */_Bool) ((3320776679544070827ULL) << (((((/* implicit */int) (unsigned short)1008)) - (978)))));
                            var_23 = ((/* implicit */unsigned short) (-2147483647 - 1));
                        }
                        var_24 = ((/* implicit */unsigned char) (!(((_Bool) 484948819))));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 684873669)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_13 [i_7])) : (((/* implicit */int) var_9))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_1 [i_7]))));
                    }
                } 
            } 
            var_27 |= ((/* implicit */unsigned int) ((_Bool) (unsigned char)192));
        }
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned long long int) 3175993543U)) : (15125967394165480787ULL)));
    var_29 = ((/* implicit */unsigned int) var_4);
}
