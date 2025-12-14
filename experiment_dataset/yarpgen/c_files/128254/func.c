/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128254
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((min((((/* implicit */short) arr_1 [i_0])), ((short)-32119))), (((/* implicit */short) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 2065070996))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) min(((-(min((var_15), (((/* implicit */unsigned long long int) var_17)))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) ((signed char) var_4))), (var_3))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) 828247470)) % ((-9223372036854775807LL - 1LL)))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 2065070974);
                    var_23 = ((/* implicit */short) arr_7 [i_2]);
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)43167), (arr_0 [4] [i_1]))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 3; i_3 < 21; i_3 += 4) /* same iter space */
        {
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((2065070996), (((/* implicit */int) (signed char)-115))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                var_25 |= ((/* implicit */short) (((-(arr_7 [i_3 - 1]))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
                var_26 = ((/* implicit */int) -5333977344625107379LL);
            }
            for (int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_27 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (signed char)114)))), (((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_0 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_0 [i_3 - 2] [i_3 - 2]))))));
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) -794394652)) ? (-794394658) : (((/* implicit */int) (signed char)115)))), (((/* implicit */int) ((signed char) -6859111004025403299LL))))))));
            }
            var_29 = ((/* implicit */unsigned int) arr_19 [i_3] [i_3] [i_3 - 2] [i_3 - 2]);
        }
        for (short i_6 = 3; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_6]);
            var_31 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-44)), ((unsigned short)43167))))));
            arr_22 [i_0] [i_6] [8LL] = ((/* implicit */short) arr_19 [6ULL] [6ULL] [i_6] [6ULL]);
        }
    }
    for (short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)109)), ((short)31362)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7] [i_7] [i_7]))) : (max((((/* implicit */long long int) arr_20 [i_7] [i_7] [i_7])), (arr_18 [i_7]))))))));
        var_33 = ((/* implicit */signed char) arr_0 [i_7] [i_7]);
        var_34 = ((/* implicit */signed char) min((var_34), (arr_12 [i_7] [i_7] [i_7])));
        arr_26 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_7] [i_7])) >> (((arr_18 [i_7]) + (8819175424842545783LL)))))) ? ((+(var_13))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114))));
        arr_27 [i_7] = ((/* implicit */signed char) arr_24 [i_7]);
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
    {
        var_35 *= (signed char)-70;
        /* LoopSeq 2 */
        for (long long int i_9 = 2; i_9 < 20; i_9 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) min((8400646833229783366LL), (6859111004025403298LL)));
            var_37 ^= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) (signed char)-110)), (7083508278522591166LL))));
            var_38 = ((/* implicit */long long int) max(((signed char)123), ((signed char)-1)));
            arr_33 [(unsigned short)19] [21U] &= ((/* implicit */signed char) arr_20 [i_8] [i_9 - 1] [i_9]);
        }
        for (long long int i_10 = 2; i_10 < 20; i_10 += 4) /* same iter space */
        {
            var_39 &= ((/* implicit */short) ((unsigned char) ((long long int) (+(((/* implicit */int) (unsigned char)151))))));
            arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_10] [i_10 - 2])) ? (arr_19 [i_10] [(short)14] [18ULL] [i_10 - 1]) : (arr_19 [i_10] [i_10] [i_8] [i_10 + 1])))));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                arr_41 [2U] = ((/* implicit */short) arr_35 [i_8]);
                arr_42 [i_8] [i_10] [i_10] [i_8] = ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)113)))), (min((-1362911827), (((/* implicit */int) (short)-32119))))));
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_10 + 2] [i_10 - 1] [i_10])) == (((/* implicit */int) min((arr_38 [i_10 + 1] [i_10 + 1] [i_10 + 1]), (arr_38 [i_10 + 1] [i_10 + 1] [i_10 + 1]))))));
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_0 [i_10 - 1] [i_10 + 1]))));
            }
            var_42 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (signed char)90)), (10808268922352901794ULL))), (((/* implicit */unsigned long long int) min((-794394652), (((/* implicit */int) (short)-27527)))))));
        }
    }
    var_43 = var_1;
    var_44 = ((/* implicit */long long int) var_17);
}
