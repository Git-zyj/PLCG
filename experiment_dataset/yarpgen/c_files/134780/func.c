/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134780
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (+(-1)));
        var_19 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (signed char)-109)) < (-563130048))));
        arr_2 [i_0] = ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) (+(4U))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) (+(arr_8 [i_0] [i_0] [i_2 - 1] [i_2 - 3])));
                        var_21 = ((/* implicit */int) ((4ULL) | (((/* implicit */unsigned long long int) arr_4 [i_2 - 3]))));
                        var_22 ^= ((/* implicit */short) -30);
                        var_23 -= ((/* implicit */unsigned short) 10ULL);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65519)) && (((((/* implicit */_Bool) (signed char)17)) && (((/* implicit */_Bool) (unsigned short)65535))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    {
                        arr_24 [i_4 - 1] [(_Bool)1] [i_4] = ((/* implicit */short) arr_14 [i_4 - 1] [i_5] [i_6]);
                        arr_25 [i_4] [i_5] [i_6] [i_7 + 1] = ((/* implicit */signed char) min((max((((/* implicit */int) arr_6 [i_4] [i_7 + 1] [i_4 - 1] [i_4])), ((+(arr_3 [(signed char)17]))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4])) && (((/* implicit */_Bool) var_0)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_25 = ((/* implicit */short) 14ULL);
                    arr_31 [i_4] [(signed char)4] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                }
                for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_9))));
                    var_27 = ((/* implicit */int) arr_13 [i_4] [i_4]);
                }
                var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4] [i_4]))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (((+(((/* implicit */int) (short)7216)))) >= (((/* implicit */int) arr_12 [i_8 - 1] [i_8 - 1])))))));
                var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)63))))) : (var_13)));
            }
        }
        arr_35 [i_4] [i_4 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) / (((/* implicit */int) (_Bool)1))))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-1), ((signed char)-9))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [(unsigned short)11] [i_4 - 1])))));
    }
    var_31 += ((/* implicit */_Bool) (((-(((((/* implicit */int) var_5)) / (((/* implicit */int) var_9)))))) << ((+(((/* implicit */int) (_Bool)0))))));
    var_32 &= ((/* implicit */int) var_12);
    var_33 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)0))))))) + (14ULL)));
}
