/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133911
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
    var_11 = ((/* implicit */long long int) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_5))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (3678093592U) : (4294967295U))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967295U) : (18U))) : (1120416982U)))) > (((unsigned long long int) (signed char)-28))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)70)), (arr_0 [22U])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (short)27933))))), (arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned char) arr_1 [i_3]);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) arr_12 [(unsigned char)16]);
                            arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3174550326U)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (549755813887ULL)));
                        }
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_6] [i_3] [i_4] [15LL] [i_3] [i_1] = (short)26068;
                            var_17 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (short)31375)), (1120416982U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158)))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
                        {
                            var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) (short)9228))) ? (2337363907U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45551))) / (arr_5 [i_7] [i_1]))))) / (((((/* implicit */_Bool) min((((/* implicit */short) arr_9 [i_1] [i_7])), (arr_8 [(unsigned short)4] [i_2] [i_4] [i_7 + 2])))) ? (2337363907U) : ((-(3174550299U)))))));
                            arr_23 [i_3] [i_2] [i_3] [i_4] [i_7 - 1] [i_3 - 2] [i_3 - 2] = ((/* implicit */signed char) (_Bool)1);
                        }
                        var_19 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) max((arr_7 [i_4] [i_2] [i_3 - 1]), (arr_7 [i_4] [i_2] [i_3 + 2])))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32680)) : (((/* implicit */int) (short)-1)))))));
                        arr_24 [i_1] [i_2] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) var_2);
                        arr_25 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)1)), (arr_1 [(short)13])))) / (((/* implicit */int) arr_19 [i_3] [i_1]))))) ? (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_1] [i_4])))))) : (((long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_22 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 + 2] [i_3] [2ULL] [i_3])) : (((/* implicit */int) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (short i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) arr_12 [i_1]);
                        var_21 = ((/* implicit */unsigned char) (unsigned short)22886);
                        arr_35 [i_10] [i_9] [(short)3] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_18 [(unsigned char)14] [(short)16] [i_10 + 2] [i_10] [(short)10]));
                        var_22 = ((/* implicit */unsigned int) 803421583543136337LL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_11 = 3; i_11 < 15; i_11 += 4) 
            {
                for (unsigned short i_12 = 1; i_12 < 16; i_12 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3174550289U)) ? (3174550299U) : (((/* implicit */unsigned int) -1)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_13 = 3; i_13 < 15; i_13 += 2) 
                        {
                            arr_43 [i_8] [i_8] [i_11] [i_8] [i_8] [4U] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_8 - 1])) ? (((/* implicit */int) arr_2 [i_8 + 2])) : (((/* implicit */int) arr_2 [i_8 + 3])))));
                            var_24 = ((/* implicit */unsigned long long int) max((arr_12 [(unsigned short)1]), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)11568)))))));
                        }
                        for (long long int i_14 = 2; i_14 < 13; i_14 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) (!((_Bool)1)));
                            var_26 ^= ((/* implicit */short) max((((/* implicit */unsigned int) 386246099)), (1120417029U)));
                        }
                        for (long long int i_15 = 2; i_15 < 13; i_15 += 1) /* same iter space */
                        {
                            arr_48 [i_15] [i_12] [i_11] [(short)9] [i_1 - 2] = ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1 + 1]))) < (((long long int) ((((/* implicit */_Bool) 1120416974U)) ? (4294967295U) : (2337363876U)))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8 + 1] [i_12] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8 + 2] [i_12] [i_11] [i_15 + 1]))) : (arr_32 [i_1 - 4] [i_11 - 1] [i_11] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1765048709)))) : (((((/* implicit */_Bool) (~(6549605410125093269ULL)))) ? (arr_32 [i_15] [i_8] [(unsigned short)10] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_8 + 2]))))))));
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_12 + 1] [i_12] [(signed char)7]))));
                            arr_51 [i_11] [i_11 - 3] [i_11] [i_11] = ((/* implicit */long long int) ((arr_15 [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_15 [i_1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)11914))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_11] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8863239308824366960LL) == (((/* implicit */long long int) ((/* implicit */int) arr_40 [(unsigned char)6] [(signed char)10] [i_16] [i_12]))))))) : (2042672705U))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_17 = 2; i_17 < 14; i_17 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) 281694209U)) * (17179869183ULL))) / (max((((/* implicit */unsigned long long int) 3174550299U)), (arr_32 [i_17] [i_17 + 1] [6] [i_1]))))) + (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2265216380822331307ULL)) ? (((/* implicit */int) (unsigned short)39442)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_15 [i_1] [i_17]))))))))));
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                for (short i_19 = 1; i_19 < 15; i_19 += 4) 
                {
                    {
                        var_31 &= ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_6)) ? (arr_10 [i_1 - 2] [i_1] [i_18] [i_19 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_19] [i_18] [(unsigned char)1] [i_1]))))) | (((/* implicit */long long int) (-(3174550285U)))))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 13206497228512838817ULL))))))))));
                        var_32 = ((/* implicit */unsigned char) 8658158614611238446ULL);
                        var_33 = ((/* implicit */long long int) max((arr_60 [i_1] [i_18] [(short)0] [i_17] [i_18] [i_17]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_19 - 1] [i_19] [i_19] [i_17 - 2])) > (((/* implicit */int) (unsigned char)255)))))));
                        arr_61 [i_1] [i_17 - 1] [i_18] [i_18] [i_19 - 1] = max((((unsigned int) max((var_6), ((short)-3471)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_19] [i_17 + 1]))))));
                    }
                } 
            } 
        }
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17609392789756809945ULL)))))) < (268642652U)));
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-1)), ((-(((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))))))))));
}
