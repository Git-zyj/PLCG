/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16670
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
    var_16 = ((/* implicit */unsigned short) min(((-(4507549350926231372ULL))), ((~(((unsigned long long int) var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_1 [15ULL] [i_1]))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0 + 3] [i_0 - 1]), (arr_0 [i_0 + 3]))))) - ((+(387380267034383518LL)))));
                                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2077310251)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41651))) * (16445751336587225029ULL))) : (((/* implicit */unsigned long long int) -1707980460)))), (((/* implicit */unsigned long long int) arr_10 [i_0] [4U] [i_1] [i_2 + 1] [i_3] [i_2] [i_4]))));
                            }
                        } 
                    } 
                } 
                arr_13 [(unsigned char)2] [i_1] [i_0 - 1] = ((/* implicit */_Bool) 4503565267632128ULL);
                var_20 = (((+(-983196716295893745LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)18] [i_0 - 1])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_0 - 1])) : (((/* implicit */int) arr_6 [(signed char)10] [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) (+(var_10)))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) ^ (arr_8 [i_5 + 4] [i_6] [i_5 + 4] [i_5 + 4] [12ULL] [i_5 + 4]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    arr_24 [i_5] [i_5] [(unsigned char)21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_19 [(unsigned char)5] [(unsigned char)5] [i_6])) && (((/* implicit */_Bool) (unsigned short)0)))))) ? ((~(max((-3165760887015675082LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((-7223884458761693245LL), (((/* implicit */long long int) (signed char)127)))) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5 - 1])))))))));
                    arr_25 [i_5] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) min((arr_10 [(unsigned short)6] [i_5 + 2] [i_6] [14] [i_6] [i_5] [i_5]), (((/* implicit */unsigned short) (_Bool)1))))) > (((/* implicit */int) (_Bool)1)))))));
                }
                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-22042)), (arr_1 [i_6] [i_5 + 3])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) var_12);
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_11 - 1] [i_11] [i_11] [4ULL] [i_11 - 1] [i_11] [i_11 - 1]), (((/* implicit */unsigned short) arr_23 [i_11 - 1] [i_11] [(signed char)21] [i_11 - 1])))))) * ((~(arr_35 [i_11 - 1] [i_11] [(_Bool)1] [i_11 - 1])))));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (unsigned short)9))) > (((/* implicit */int) var_13))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (-293918701041311534LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11] [i_10] [i_10])))))) ? (((/* implicit */unsigned long long int) arr_35 [i_8] [(short)9] [i_8] [(unsigned char)2])) : (arr_16 [i_11] [i_9] [i_10])))) ? ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (arr_35 [(_Bool)1] [i_10] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((2058003190168332624ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_11] [2LL])))))), (((((/* implicit */int) (short)-12119)) / (((/* implicit */int) arr_10 [i_11] [i_11 - 1] [i_11] [12U] [i_11] [i_11] [i_11])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (+(arr_14 [i_12])))))) : (((((/* implicit */_Bool) 11770567386923411549ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) : (-229686822772637785LL)))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_20 [(signed char)20] [(unsigned char)10] [i_12] [i_12])))), (((/* implicit */int) ((19ULL) > (10324573824616819001ULL))))))) ? (((min((((/* implicit */long long int) arr_12 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])), (2020710904174149761LL))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) arr_7 [i_12] [i_12] [i_12]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_12])) >> (((var_3) + (6483420581056130562LL))))))))));
        var_28 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (min((3291502977895597238ULL), (8965286956238821398ULL))))), (((/* implicit */unsigned long long int) (+(max((arr_1 [23] [i_12]), (((/* implicit */long long int) (short)26861)))))))));
    }
}
