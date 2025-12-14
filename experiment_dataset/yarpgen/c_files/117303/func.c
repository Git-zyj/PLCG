/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117303
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) 5182719404377131116LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1677164654)))))))))));
    var_11 = ((/* implicit */unsigned short) ((long long int) var_5));
    var_12 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((-((+(var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))));
            var_14 -= ((/* implicit */short) -1677164645);
            arr_5 [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((long long int) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)54106)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54106)) ? (-1677164645) : (((/* implicit */int) (_Bool)1)))))));
            var_15 += ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_3 [i_1] [2U] [i_0])))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 2]))))) : (var_3));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_0]))));
                arr_12 [3] [i_2] [i_2] [i_3 + 1] = ((unsigned long long int) ((short) var_8));
                arr_13 [i_0] [i_0] &= ((/* implicit */int) var_6);
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_2] [i_4 + 1] = ((/* implicit */short) (+(((/* implicit */int) ((short) min((4516271336761849107ULL), (((/* implicit */unsigned long long int) (signed char)45))))))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1677164657)) ? (((/* implicit */int) (short)4499)) : (((/* implicit */int) (unsigned short)44671))))), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2809992555U))))) : ((+(arr_7 [i_4 + 1] [i_4] [(_Bool)1])))));
                arr_18 [4] [i_2] = ((/* implicit */unsigned long long int) ((int) arr_9 [i_4 + 1]));
                var_16 = ((/* implicit */_Bool) min((max((arr_15 [i_0] [(unsigned short)7] [i_4] [i_4 + 1]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_3))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) /* same iter space */
                {
                    var_17 &= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_5])) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_8))))));
                    arr_25 [i_6] [i_5] [i_0] = ((/* implicit */short) var_4);
                    arr_26 [i_2] [i_5] [i_5] [i_0] = min((((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned short)54843)))), (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((_Bool) (short)4531))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) /* same iter space */
                {
                    arr_30 [(unsigned char)8] [i_2] [i_5] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_0))) && (((((/* implicit */_Bool) arr_24 [i_7] [i_2])) && (var_9)))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16995535920885365071ULL)));
                    arr_31 [i_0] [i_5] = ((/* implicit */unsigned long long int) var_1);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_29 [i_5] [i_2] [i_0] [i_2]))));
                }
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_34 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [(unsigned char)7] [i_0] [i_5] [i_8]))))) < (((((/* implicit */_Bool) -298408524)) ? (3026496051915031903ULL) : (((/* implicit */unsigned long long int) 298408537))))));
                    var_20 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_0))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_27 [i_0] [i_2]))) ? ((((_Bool)1) ? (1677308861U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20858)) || ((_Bool)0))))))))));
                }
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned short) var_4))) & (((/* implicit */int) (!(((/* implicit */_Bool) 15420248021794519713ULL))))))) | ((+((((_Bool)1) ? (((/* implicit */int) arr_2 [(_Bool)0])) : (((/* implicit */int) arr_9 [i_2]))))))));
                arr_35 [i_5] [i_5] [i_5] [(_Bool)0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_32 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57728))) : (9629967651546540860ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (4196621235U))))));
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_2)))))))));
            var_23 += ((/* implicit */unsigned int) var_8);
            arr_36 [i_0] [i_0] [2U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20864))))) == (((((/* implicit */_Bool) ((arr_29 [(unsigned char)0] [i_2] [i_2] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : ((-(var_0)))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_0] [i_9 + 1]), (arr_3 [i_0] [i_0] [i_9 + 1]))))) : (min((((/* implicit */unsigned long long int) -5663522406275980434LL)), (17877557530922454079ULL))))))));
                        var_25 &= ((/* implicit */unsigned short) -5663522406275980434LL);
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_9)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */short) (unsigned char)18))))))))));
                        var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_23 [i_0] [i_9 + 1] [i_9] [i_10 + 2] [i_2])))) ? (((/* implicit */int) arr_23 [i_0] [i_9 + 1] [0U] [i_10 + 1] [(_Bool)1])) : (((/* implicit */int) min((arr_23 [i_9] [i_9 + 1] [(signed char)6] [i_10 + 1] [4U]), (arr_23 [0ULL] [i_9 + 1] [(_Bool)1] [i_10 + 2] [i_0]))))));
                        arr_41 [i_9] = 9629967651546540860ULL;
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20877)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_2), ((short)25356))))))) : (max((((/* implicit */unsigned int) var_9)), (var_5)))));
            arr_45 [i_0] [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) 8958365228988188694ULL));
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 15702430733607264523ULL))) ? (((/* implicit */int) ((signed char) min((arr_7 [(short)2] [i_0] [(unsigned short)8]), (((/* implicit */unsigned int) arr_27 [i_0] [i_0])))))) : (((/* implicit */int) ((short) arr_8 [i_0] [i_0])))));
    }
    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
    {
        arr_50 [i_12] [i_12] = ((/* implicit */short) (_Bool)1);
        var_30 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12] [(unsigned short)9] [i_12] [i_12]))) ^ (((arr_2 [i_12]) ? (var_5) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (arr_7 [i_12] [i_12] [(_Bool)1])))))));
    }
}
