/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121262
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (1050442454U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 6; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (1275618189)));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14686))) | (arr_10 [i_1 - 2] [i_2])));
                        var_13 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 + 4] [i_0]))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 3])) ? (((/* implicit */int) (_Bool)1)) : (1275618179)));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) var_4);
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((1854443743047713162LL) % (arr_6 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */_Bool) arr_10 [i_6] [i_5]);
                    arr_22 [i_4] [(signed char)3] [i_5] = var_2;
                    var_16 ^= ((/* implicit */unsigned long long int) arr_18 [i_6] [i_5] [i_4]);
                }
            } 
        } 
        var_17 ^= ((/* implicit */signed char) (((((((_Bool)1) ? (1275618189) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((_Bool) arr_13 [(unsigned char)8]))))) ? (((((/* implicit */int) ((unsigned char) arr_16 [i_4] [i_4]))) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10))))))) : (((/* implicit */int) min(((unsigned short)32319), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((unsigned long long int) arr_10 [i_7] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [3ULL] [3ULL] [3ULL] [3ULL]))))));
                        var_19 ^= ((/* implicit */short) 2193235846570699910LL);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) arr_20 [i_7] [i_7] [i_7] [2ULL]);
    }
}
