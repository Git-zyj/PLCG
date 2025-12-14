/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189477
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_13 -= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (arr_1 [i_0 + 1])))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) (_Bool)1)) * (arr_2 [i_0 + 1])))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0 - 2])))) | (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_9)))) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (max((((/* implicit */unsigned int) var_4)), (arr_0 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) < (((/* implicit */int) var_7))));
            var_15 = ((971618932U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_16 = (!(((/* implicit */_Bool) (~(arr_2 [i_0 - 1])))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */short) max((((unsigned int) arr_9 [i_0 + 1] [i_2])), (max((((arr_8 [i_2] [i_2]) ? (((/* implicit */unsigned int) var_0)) : (3027491684U))), (((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) & (var_0))))))));
            var_17 = ((/* implicit */int) ((_Bool) ((arr_8 [i_2] [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_0 - 1]))) : (3323348363U))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 971618932U)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) arr_4 [i_3]);
            arr_13 [i_3] = (+(((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((4088687386U) - (4088687375U)))))) + (max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [(unsigned char)0] [i_3]))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29569)) ? (((/* implicit */int) arr_18 [i_0] [i_3] [i_4 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) max((1267475611U), (((/* implicit */unsigned int) arr_7 [i_3]))))) : (((((/* implicit */long long int) arr_19 [i_0] [i_3] [i_4 + 1])) ^ (var_9))))) | (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_21 -= ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_7] [i_7] [i_8 + 3])) ? (((/* implicit */int) arr_28 [i_0] [i_6 + 2] [i_7] [i_8] [i_8 + 3])) : (((/* implicit */int) arr_28 [i_0 - 2] [i_7] [i_7] [i_7] [i_8 + 1])))) : (((/* implicit */int) (signed char)127)))))));
                        arr_29 [i_0] [i_0] [i_0] [18LL] [i_7] [i_8] = ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0]);
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) 3027491684U))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [23U]))));
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0])) ? (15640365490602597407ULL) : (7342942827866047172ULL)))) ? (arr_5 [i_0 + 1]) : (((/* implicit */unsigned int) max((var_0), (((/* implicit */int) var_3)))))))), (((((/* implicit */_Bool) (-(-3355680457988023209LL)))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_6])))))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 4; i_9 < 22; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (max((((((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3250549743U))) >> (((arr_19 [(signed char)2] [i_0 + 1] [i_0 - 2]) - (3799697329U))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_27 [i_0] [(unsigned char)12] [i_0] [18] [i_9])) : (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) arr_5 [12U])) ? (((/* implicit */int) arr_4 [i_9 - 3])) : (((/* implicit */int) (unsigned char)211)))))))))));
                var_27 = ((/* implicit */signed char) max((var_27), ((signed char)109)));
            }
        }
    }
    var_28 = ((/* implicit */_Bool) (((!((!((_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
