/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112264
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (((((/* implicit */_Bool) (~(-1074449080)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (arr_5 [i_0] [i_1 + 1] [i_0])))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned char)128))))) ? (max((arr_5 [i_0] [i_1 - 1] [i_0]), (arr_5 [i_1 + 1] [i_2 - 1] [i_0]))) : (((/* implicit */unsigned int) ((int) (unsigned char)93)))));
                    arr_8 [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)19214))))), (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_9))))) : ((~(max((((/* implicit */unsigned int) (unsigned short)52725)), (var_7)))))));
                    arr_9 [i_0] [i_2 - 1] [i_1 - 1] [i_0] = arr_2 [i_0];
                }
            } 
        } 
    } 
    var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (32566893U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37441))) ^ (4262400403U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 106966674U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (var_8)))) ? (3009952092U) : (((((/* implicit */_Bool) 3241763992U)) ? (243657602U) : (974869707U))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_13 = ((/* implicit */short) 0U);
        var_14 = ((/* implicit */short) var_4);
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] = (unsigned short)2341;
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) (short)22554);
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (signed char)-21))));
                        var_17 = arr_22 [i_4] [i_4] [i_6] [i_7];
                    }
                } 
            } 
        } 
        arr_24 [i_4] = ((/* implicit */int) (+(min((((/* implicit */long long int) (unsigned char)132)), (-5074848247409330794LL)))));
    }
    for (short i_8 = 4; i_8 < 22; i_8 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                {
                    arr_34 [i_8 + 1] [i_8] [i_10] = 9760139322574527053ULL;
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_9))));
                        var_20 ^= ((/* implicit */int) (-((~(arr_30 [i_8 - 4])))));
                    }
                    var_21 ^= ((/* implicit */int) var_4);
                    arr_37 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((32566893U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8 - 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)0))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_12 = 2; i_12 < 22; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) arr_40 [i_14]))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) max((arr_27 [i_12 + 1]), (((/* implicit */long long int) 1741168266))))) ? (((/* implicit */int) max((((/* implicit */short) arr_26 [i_8 - 1] [i_13])), ((short)22554)))) : (((/* implicit */int) var_10))))));
                        var_23 = ((/* implicit */int) var_3);
                    }
                } 
            } 
        } 
    }
}
