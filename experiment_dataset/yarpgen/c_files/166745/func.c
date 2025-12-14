/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166745
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)55140)) : (((((/* implicit */int) ((_Bool) var_5))) << (((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)127)), (587658690)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [(unsigned short)0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-126)) + (((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) var_1)))))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) 752938612))))) % (((/* implicit */int) (_Bool)1)));
            arr_11 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (signed char)46);
        }
        for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            arr_16 [i_3] [13ULL] = ((/* implicit */int) ((3080628297596795744ULL) << (((((/* implicit */int) (unsigned short)34322)) - (34298)))));
            arr_17 [i_1] [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)7143)) ? (var_0) : (17232337339004118213ULL)))));
        }
        for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 587658700)) ? (((/* implicit */unsigned long long int) 399980548)) : (5167079188487190208ULL)));
            arr_20 [(signed char)14] [i_4] [i_1] = ((((((/* implicit */_Bool) 587658690)) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_7 [i_1 + 4])));
            arr_21 [i_1 - 3] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) ((signed char) arr_19 [i_4] [i_4 + 1]));
            arr_22 [i_4] [i_4 + 2] = var_4;
        }
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_33 [i_1 - 1] [i_5] [14ULL] [i_5] [(_Bool)1] [i_8] [i_7] = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)112))))) : (((168422865728933620LL) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                                var_18 = ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_1)));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_32 [i_1] [i_5] [i_6] [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967289U))))))));
                                arr_34 [i_5] [i_5] [i_6] [i_7] [i_8] [i_6] = var_2;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) > (var_0)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_9 = 2; i_9 < 16; i_9 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((_Bool) var_5));
            var_22 |= ((/* implicit */unsigned char) ((767135415) > (((/* implicit */int) (_Bool)0))));
        }
        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10] [i_1 + 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (var_0)));
            var_24 = (+((+(arr_28 [(_Bool)1]))));
            arr_40 [i_10] = arr_30 [(signed char)12] [i_1] [i_10] [i_1] [i_10];
            /* LoopNest 3 */
            for (unsigned char i_11 = 4; i_11 < 13; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 863907873)) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) var_1))));
                            var_26 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_6)));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_14 = 3; i_14 < 16; i_14 += 1) 
        {
            var_27 = ((/* implicit */signed char) (~((-(var_3)))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 15; i_15 += 1) 
            {
                for (unsigned short i_16 = 2; i_16 < 14; i_16 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3198629454167440838LL)) + (13279664885222361408ULL)));
                        arr_56 [i_1] [13ULL] [i_1] [i_14] [(signed char)14] = ((/* implicit */unsigned short) ((863907870) >> (((((5167079188487190208ULL) << (((/* implicit */int) (_Bool)0)))) - (5167079188487190181ULL)))));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((signed char) var_6));
                            var_30 = ((/* implicit */unsigned long long int) var_12);
                            var_31 -= ((/* implicit */unsigned short) 5167079188487190211ULL);
                            var_32 = ((/* implicit */unsigned int) ((arr_19 [i_14] [i_1 - 2]) << (((((/* implicit */int) arr_48 [i_1 + 1] [i_14 - 3])) - (17092)))));
                            var_33 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_1] [(unsigned char)12])))) ? (((unsigned long long int) (unsigned short)5282)) : (((/* implicit */unsigned long long int) -2131293519))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                        {
                            var_34 = ((/* implicit */int) (signed char)25);
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5897997994378290936ULL)) ? (((((/* implicit */_Bool) arr_47 [i_1] [i_14 - 1] [i_15 + 1] [i_16] [i_18] [i_14] [i_18])) ? (9331370876187777635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) == (16812014366668946037ULL)))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_19 = 2; i_19 < 15; i_19 += 3) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7128315393104410901ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-110))))) : (((((/* implicit */int) (unsigned char)33)) % (((/* implicit */int) arr_52 [i_19] [i_16] [i_15] [8]))))));
                            arr_65 [i_14] [i_14 - 3] [11] [i_16 - 1] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_16 - 1])) + (-863907874)));
                        }
                        for (signed char i_20 = 0; i_20 < 17; i_20 += 1) 
                        {
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8084)) ? (((((/* implicit */_Bool) 493153454U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-85)))));
                            var_38 = ((/* implicit */signed char) 2584173317U);
                        }
                    }
                } 
            } 
            arr_68 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_14] [i_14 + 1] [(signed char)5] [i_1 - 1] [i_14 + 1])) && (((/* implicit */_Bool) -208390524))));
        }
    }
}
