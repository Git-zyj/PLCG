/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122296
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(signed char)10] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (71494644084506624ULL)))));
        var_15 += arr_1 [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_16 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */long long int) (signed char)0)), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
            var_17 &= ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) (+(7672978111022972322ULL))))), (var_12)));
        }
        arr_5 [7ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16566048926813756927ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27242))) : (min((arr_4 [i_0] [i_0]), (11099759471067961923ULL))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_2])) || (((/* implicit */_Bool) arr_8 [i_2])))))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_20 = ((arr_15 [i_2] [i_4] [i_3] [i_2]) % (arr_15 [i_2] [i_4] [i_4] [i_5]));
                            var_21 = ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 4; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_19 [i_7 - 1] [i_2] [i_2] [i_2])) : (7672978111022972335ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_7])))))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_10] [1] = ((/* implicit */long long int) ((short) arr_21 [i_7 - 3] [i_7 - 3]));
                            arr_33 [i_10] [i_10] [i_8] [i_10] [i_2] = ((/* implicit */int) arr_9 [i_10] [i_10]);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((signed char) arr_23 [i_7 - 4] [i_8] [(unsigned short)17])))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_2] [(unsigned short)8] [i_2])) <= (((/* implicit */int) var_6)))))) : (((long long int) var_3))));
        }
        for (short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) var_9)));
            var_25 = ((/* implicit */unsigned long long int) var_14);
        }
        var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((7346984602641589715ULL) % (10773765962686579288ULL))) : (((/* implicit */unsigned long long int) 3433866975U))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((min((11099759471067961923ULL), (((/* implicit */unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) var_7)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
}
