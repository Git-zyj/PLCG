/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107052
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((short) var_5));
                            arr_15 [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 2897973718U)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7738))) : (10886958061587973892ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1672474597)) : (10886958061587973892ULL))))));
                var_20 = ((/* implicit */unsigned short) var_15);
            }
            arr_16 [i_0] [i_0] = ((/* implicit */long long int) (short)5961);
            arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) arr_0 [(unsigned short)7])));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_31 [(signed char)9] [i_7] [i_5] [i_7] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2476355422U)) ? (12093506769680971881ULL) : (arr_2 [i_0]))))) ? ((+(arr_18 [i_8] [i_5] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-1))))) & (((((/* implicit */long long int) ((/* implicit */int) (short)-31972))) % (var_11))))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_18 [i_5] [i_5] [i_7]))) >= (((/* implicit */int) var_3))));
                            arr_32 [i_6] [i_6] [0U] [i_6] [i_7] [i_8] |= ((/* implicit */_Bool) ((unsigned long long int) 4317808165439928562ULL));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */unsigned long long int) 365610661)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58425))) | (9005000231485440ULL)))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-31972)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_0]))) ^ (((((/* implicit */unsigned long long int) -365610661)) * (16600182499235558496ULL)))));
            arr_33 [i_0] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [9] [i_0] [i_0] [i_0] [i_0])))))));
            arr_34 [i_5] = ((_Bool) 7559786012121577723ULL);
            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-37))));
        }
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_12)) : (((((long long int) var_14)) % (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
    var_26 = ((/* implicit */signed char) var_8);
}
