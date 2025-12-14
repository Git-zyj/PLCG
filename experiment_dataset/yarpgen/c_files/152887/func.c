/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152887
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)207)) > (((/* implicit */int) (unsigned short)12953))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((683206127) == (((/* implicit */int) (unsigned char)96))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != ((~(((/* implicit */int) (unsigned short)52583))))));
                    arr_12 [i_0] [i_0] [i_0] [14LL] |= ((/* implicit */_Bool) ((((arr_2 [(unsigned short)18]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))) - (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) arr_6 [12LL] [14U])) : (arr_2 [(signed char)4])))));
                }
            } 
        } 
        arr_13 [i_0] [(_Bool)0] = ((((/* implicit */int) arr_1 [i_0])) == ((~(((/* implicit */int) (unsigned short)12962)))));
        arr_14 [i_0] [(unsigned short)11] = ((/* implicit */_Bool) (+(1)));
        arr_15 [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned char)8]);
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_19 [8LL] [8LL] &= ((/* implicit */short) ((((/* implicit */int) max((((signed char) arr_16 [i_3])), (((/* implicit */signed char) ((arr_16 [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) % (((((/* implicit */int) ((signed char) arr_18 [i_3]))) | (arr_18 [i_3])))));
        arr_20 [i_3] = ((/* implicit */int) max(((-(max((-6565944159487600216LL), (((/* implicit */long long int) (unsigned short)18136)))))), (((/* implicit */long long int) min((arr_17 [i_3]), (arr_17 [i_3]))))));
        arr_21 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_16 [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_17 [i_3])))))))) >> (((max((((0LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))), (((/* implicit */long long int) ((unsigned char) arr_16 [i_3]))))) - (177LL)))));
        arr_22 [(short)4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3]))))) : (((((/* implicit */int) (unsigned short)52559)) ^ (((/* implicit */int) (unsigned char)0)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        arr_26 [(unsigned short)20] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned short)12985)))) | ((~(((/* implicit */int) (unsigned short)12977)))))) ^ (((/* implicit */int) ((signed char) arr_23 [i_4] [i_4])))));
        arr_27 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) arr_17 [i_4])) : (arr_24 [i_4]))))))) - (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)154))) && (((/* implicit */_Bool) ((arr_18 [i_4]) ^ (((/* implicit */int) arr_17 [i_4]))))))))));
        arr_28 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_18 [i_4]))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)12992)) != (((/* implicit */int) (unsigned short)52559)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 4; i_5 < 23; i_5 += 2) 
        {
            arr_32 [i_4] [i_4] = ((/* implicit */_Bool) arr_23 [i_4] [i_5]);
            arr_33 [(unsigned short)9] [(unsigned char)3] [i_4] = ((/* implicit */int) ((((arr_24 [i_5]) | (((/* implicit */int) (unsigned short)39746)))) != (((/* implicit */int) arr_17 [i_4]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    arr_40 [i_7] = ((/* implicit */signed char) (~(max((12582971925854876219ULL), (((/* implicit */unsigned long long int) (unsigned short)47399))))));
                    arr_41 [i_7] [(unsigned char)10] [(unsigned char)10] = ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) <= (16769024U)))), (max((((/* implicit */unsigned long long int) 11180520)), (2817972095944805343ULL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_44 [i_8] [i_6] = ((/* implicit */_Bool) arr_16 [0LL]);
                        arr_45 [i_8] = ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_6])) ? (arr_38 [i_8]) : (((/* implicit */int) (unsigned short)18136)))) <= (arr_38 [i_4])))), (arr_37 [(unsigned char)18] [i_8])));
                    }
                    arr_46 [i_4] [i_6] [i_7] [(_Bool)1] = ((/* implicit */int) arr_35 [i_4] [i_6] [i_7]);
                    arr_47 [i_4] [i_7] = ((/* implicit */unsigned long long int) arr_23 [i_4] [i_6]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_53 [i_9] = ((/* implicit */unsigned char) max((arr_51 [i_9 + 1]), (((/* implicit */unsigned short) (_Bool)1))));
                arr_54 [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned int) arr_2 [(unsigned short)18]));
                arr_55 [i_9 + 3] [i_10] = ((/* implicit */unsigned short) (!((_Bool)1)));
                arr_56 [i_9] [i_10] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)12977)) / (15728640)))));
            }
        } 
    } 
    var_14 = 1157933102;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned char) var_11)))))) != (((/* implicit */int) ((((_Bool) 6653211350907918271ULL)) || (((/* implicit */_Bool) (unsigned short)18151)))))));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) var_3)), ((((_Bool)1) ? (221216432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30973)))))));
}
