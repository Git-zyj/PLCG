/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1420
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
    var_10 = ((/* implicit */int) ((signed char) (unsigned short)14129));
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)80)) & (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [(short)5] = ((/* implicit */unsigned short) ((_Bool) 4294967294U));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_0 - 1] = ((/* implicit */int) (~(1339097476897173640ULL)));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_17 [6ULL] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_4 [i_4 + 2] [i_4 + 2]) - (((/* implicit */int) (unsigned short)5564))));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_5 [i_1] [i_2 - 1]))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((var_6) - (5781210465955729614ULL)))))) ? (((9223372036854775805LL) >> (((var_7) - (3977769845448353645LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                            arr_18 [i_4] [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((int) var_9));
                            var_14 |= ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned short) ((3044676523U) + (arr_8 [(unsigned short)10] [i_0 - 1] [i_0 - 1] [i_0])));
                        arr_23 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 15; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((1048575LL) / (-9223372036854775806LL)))))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6))))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_18 &= ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_14 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9]))));
                            var_19 = ((/* implicit */unsigned short) ((858592999U) >> (((17107646596812377976ULL) - (17107646596812377948ULL)))));
                        }
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            var_20 = (-(3125376011U));
                            var_21 = ((/* implicit */int) ((unsigned short) var_6));
                            arr_34 [i_0] [6] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_7 + 1] [i_0 + 2]))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((8ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_10] [i_1] [i_0 + 1]))))))) * (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_15 [i_7])))));
                            arr_35 [i_0 + 2] [i_1] [i_1] [i_7] [i_8] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_14 [(unsigned short)0] [i_1] [i_1] [12ULL] [i_10] [14U]);
                        }
                        var_23 ^= ((/* implicit */int) ((long long int) arr_24 [i_0] [i_0 + 2]));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_33 [i_11] [i_11])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_11] [i_11] [i_11])), (3862885051U))))));
        var_25 |= ((/* implicit */int) ((signed char) ((((int) (unsigned short)59992)) | (((int) arr_6 [i_11])))));
        var_26 = ((/* implicit */long long int) max((var_26), (max((((min((9223372036854775804LL), (((/* implicit */long long int) (short)26601)))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))))), (((/* implicit */long long int) ((unsigned int) var_4)))))));
        var_27 = max((min((((((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) / (980005219U))), (max((((/* implicit */unsigned int) var_0)), (arr_3 [i_11]))))), (((((/* implicit */_Bool) -15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) : (0U))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((signed char) var_6));
        var_29 = ((/* implicit */signed char) ((((34351349760ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12]))) : (((unsigned long long int) var_2))));
    }
}
