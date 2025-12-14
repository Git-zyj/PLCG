/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148512
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
    var_11 = ((/* implicit */unsigned int) ((signed char) min(((+(332791831))), (((/* implicit */int) max((var_10), (var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(144924949U)))) ? (((((/* implicit */_Bool) (unsigned short)39761)) ? (4150042346U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) ? (((int) arr_5 [i_0])) : (((((144924949U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)9] [i_0]))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [7ULL] [i_1 + 1])) : (arr_3 [i_0] [i_0])))))));
                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [(signed char)14] [(signed char)14])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3])))))));
                var_13 = ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                var_14 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 4])))) << (((((arr_1 [i_1 + 3] [i_1 + 2]) ? (((/* implicit */int) arr_1 [i_1 + 4] [i_1 - 1])) : (((/* implicit */int) var_0)))) - (206)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -332791831))))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))))));
        var_15 -= ((/* implicit */unsigned long long int) var_1);
        var_16 = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_5))))) <= ((~(((/* implicit */int) arr_8 [(signed char)0]))))));
        var_17 = (+((+(((/* implicit */int) (_Bool)1)))));
    }
    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        arr_14 [i_3 - 2] = ((/* implicit */short) ((_Bool) arr_1 [i_3 - 2] [i_3 + 1]));
        /* LoopSeq 4 */
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */int) (+(((((((/* implicit */int) arr_12 [i_3 - 1])) >= (((/* implicit */int) (_Bool)1)))) ? ((-(arr_9 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [9ULL] [(unsigned char)5])) : (arr_15 [i_3] [i_4 - 1]))))))));
            var_19 -= ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */signed char) (!((_Bool)1)))), (var_1)))), (max((((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)1)))), (((((/* implicit */_Bool) arr_3 [(short)11] [i_4 - 1])) ? (arr_15 [i_3] [(_Bool)1]) : (arr_3 [(unsigned char)4] [i_3])))))));
        }
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 - 1]))));
                        arr_26 [i_7] [2U] [2U] = ((/* implicit */int) (!(min(((!((_Bool)1))), ((!(((/* implicit */_Bool) (unsigned short)1))))))));
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_3 + 1] [i_3 - 2])) % (((/* implicit */int) (unsigned short)40349)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5 - 1] [i_6] [i_6 + 1])))))));
                        arr_27 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((13ULL), (((/* implicit */unsigned long long int) var_0))))) ? (3730350937430832829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_23 [i_3 + 1] [i_5 + 1] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned char) arr_2 [4]))))))))) ? (((((/* implicit */unsigned long long int) ((68719476735LL) << (0U)))) & (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_6]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_7] [i_6 + 1] [i_3 - 2] [i_3 - 2])))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) max(((unsigned char)197), (arr_18 [i_3] [i_3] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((2047ULL), (((/* implicit */unsigned long long int) arr_13 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_6 [i_3] [i_3]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 7864320)) : (var_4))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((4294967267U), (((/* implicit */unsigned int) arr_15 [i_5 - 1] [0U])))), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_5 [i_3 - 2])))));
            var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 29U)) ? (((/* implicit */int) arr_18 [i_3] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_21 [i_3] [i_3 - 2] [i_5 + 1] [i_5])))))))) % (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_2)), (var_4))))));
            var_25 = ((/* implicit */short) min((((/* implicit */unsigned char) min(((_Bool)1), ((!(((/* implicit */_Bool) var_8))))))), (arr_23 [i_3] [i_3] [i_3] [i_3 - 1])));
        }
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
        {
            arr_30 [i_3] = ((/* implicit */_Bool) 3664988139U);
            var_26 = ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 4) 
        {
            arr_34 [i_9 - 2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_3] [i_3 - 2])))) >= (min(((-(((/* implicit */int) arr_12 [i_9 + 1])))), (((/* implicit */int) (unsigned char)244))))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_32 [(unsigned short)6]))));
        }
    }
}
