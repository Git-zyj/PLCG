/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152331
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (2554450996219584871ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) % (((/* implicit */unsigned long long int) ((arr_1 [i_0]) << (((arr_1 [i_0]) - (6870767518529257757LL))))))));
        var_12 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) * (((-6546144857325433620LL) / (arr_1 [i_0])))));
        var_13 = ((/* implicit */unsigned char) var_4);
    }
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [i_3] = ((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((unsigned long long int) 6546144857325433626LL);
                        var_14 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_1 [i_2 - 3]))) ^ (max((((/* implicit */unsigned long long int) ((arr_0 [i_2]) ? (-850882814) : (((/* implicit */int) arr_7 [i_3] [i_2]))))), (((((/* implicit */_Bool) arr_3 [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [(_Bool)0] [(_Bool)0]))) : (var_7)))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)1501))));
                        arr_20 [0LL] [i_2] [i_1] = ((/* implicit */int) max((arr_9 [i_3] [i_3]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (((unsigned long long int) var_2))))));
                        var_15 = ((((/* implicit */_Bool) ((unsigned short) -3215760380962102249LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_11 [i_2 + 1] [i_1] [i_2 + 1])))))) : (arr_13 [i_2 + 1] [i_1] [i_2 + 1]));
                    }
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) ((-6546144857325433620LL) == (-6546144857325433626LL)));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((-3532306670729666786LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) * (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) 6546144857325433610LL)) : (16564586580125138389ULL)))));
                        var_17 = ((/* implicit */unsigned int) ((((arr_21 [i_9]) ? (((/* implicit */int) min((var_2), (arr_27 [i_6] [i_6] [i_6] [i_9])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27516))) <= (-6546144857325433634LL)))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_25 [i_6])) / (((/* implicit */int) arr_25 [i_7]))))))));
                    }
                } 
            } 
        } 
        arr_32 [i_6] = ((/* implicit */long long int) var_0);
        arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_29 [i_6] [i_6]) ? (var_8) : (var_4)))), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_29 [i_6] [i_6])) | (((/* implicit */int) arr_26 [i_6] [i_6]))))))) : (max((var_9), (arr_28 [i_6])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            var_18 = arr_34 [i_10] [i_10] [i_6];
            /* LoopSeq 1 */
            for (short i_11 = 2; i_11 < 15; i_11 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_27 [i_11 + 1] [i_6] [i_6] [i_6]))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_21 [(unsigned char)1])), (arr_30 [i_6] [i_11] [i_11] [i_6] [i_10]))))))) == (((long long int) arr_30 [i_11 + 1] [i_11 + 1] [i_11 - 2] [i_11] [i_11]))));
            }
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3014050991397019519LL)))))))) ? (((/* implicit */long long int) ((int) var_4))) : (6781106046398633104LL))))));
            var_22 = ((/* implicit */unsigned long long int) arr_22 [i_6]);
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_14 = 1; i_14 < 15; i_14 += 4) 
                    {
                        arr_47 [i_6] [i_6] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) ((5188573913984870668ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155)))));
                        var_23 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [(short)8]))));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_12] [i_6] [i_6] [i_14 + 1])) * (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_14 - 1]))));
                        var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)0)))) & (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)-64))))));
                        var_26 -= ((short) arr_30 [i_14 - 1] [i_14] [i_14] [i_14 - 1] [i_14 - 1]);
                    }
                    arr_48 [i_6] [i_12] [(signed char)10] = ((/* implicit */long long int) arr_43 [i_6]);
                }
            } 
        } 
    }
    for (short i_15 = 0; i_15 < 24; i_15 += 1) 
    {
        var_27 = ((/* implicit */long long int) arr_51 [i_15]);
        arr_52 [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (var_2)))) && (((/* implicit */_Bool) ((int) 1973537525))))))) == (((((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_15])) + (((/* implicit */int) arr_50 [i_15]))))) ^ (var_10))));
        /* LoopNest 3 */
        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 4; i_17 < 21; i_17 += 1) 
            {
                for (unsigned char i_18 = 2; i_18 < 23; i_18 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) arr_61 [(_Bool)1] [i_17 + 2] [i_18 - 2]);
                        arr_62 [i_15] [i_16] [i_15] [i_18] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) ^ (arr_60 [i_18] [i_17] [i_17] [i_16] [(short)9] [i_15]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (arr_60 [(signed char)18] [i_17 - 2] [i_17] [i_16] [(short)13] [(short)13])));
                    }
                } 
            } 
        } 
    }
    var_29 = ((_Bool) (_Bool)1);
}
