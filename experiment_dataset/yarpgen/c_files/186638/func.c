/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186638
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
    var_12 = ((/* implicit */unsigned int) var_9);
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) max((((/* implicit */short) var_4)), (var_8)))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_8))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) arr_3 [i_0])))) * (((/* implicit */int) arr_3 [i_0]))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])))));
                        var_15 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) var_11)))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) var_9);
                            arr_21 [(_Bool)1] [(unsigned short)8] [i_5] [i_6] [i_0] = ((unsigned char) ((1706924711) - (((/* implicit */int) (unsigned char)11))));
                            var_17 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) var_8)) - (((/* implicit */int) var_6)))))) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5] [i_5] [i_4] [i_0])))))))));
                            var_18 -= ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            } 
            arr_22 [0U] [0U] |= min((min((var_7), (((/* implicit */unsigned int) arr_2 [(unsigned short)4])))), (((/* implicit */unsigned int) arr_9 [(_Bool)1])));
        }
        arr_23 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_0] [4]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) ((_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_15 [i_0] [(signed char)9] [i_0]))));
        var_19 = ((/* implicit */signed char) var_10);
    }
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        arr_27 [(unsigned char)24] [i_8] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_6))))));
        var_20 *= ((/* implicit */long long int) (((((+(((/* implicit */int) var_1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((short) (_Bool)0)), (((/* implicit */short) ((arr_24 [i_8] [i_8]) < (arr_24 [i_8] [i_8])))))))));
        var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (unsigned short)6734))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        arr_37 [i_8] [i_9] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((signed char) arr_28 [3ULL] [i_10])), ((signed char)-84)))) ? (((/* implicit */int) (((+(arr_28 [i_8] [12U]))) <= (((/* implicit */long long int) (~(var_7))))))) : ((~(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_32 [i_9] [i_10] [i_10])))))))));
                        var_22 = ((/* implicit */signed char) var_0);
                        var_23 ^= ((/* implicit */unsigned char) var_9);
                        var_24 = ((/* implicit */unsigned char) arr_26 [i_8]);
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_30 [i_8] [(unsigned short)16])))))))) && (((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_10] [i_11])))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) (unsigned short)1984);
    }
}
