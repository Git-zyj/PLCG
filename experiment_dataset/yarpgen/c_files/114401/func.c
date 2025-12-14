/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114401
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
    var_20 = ((/* implicit */unsigned char) (+(-1354716827)));
    var_21 = ((/* implicit */unsigned int) (~(((int) var_1))));
    var_22 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((short) var_19);
        arr_3 [i_0] = ((/* implicit */long long int) min((max((4206775500U), (((/* implicit */unsigned int) (unsigned char)198)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)34)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */short) ((signed char) ((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1]))));
                        var_23 |= ((((arr_4 [i_0 + 1] [i_2]) ^ (arr_4 [i_0 + 1] [i_2]))) << (((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)62)), ((short)-9882)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_1] [i_0]))) : (min((((/* implicit */unsigned long long int) max(((unsigned char)191), ((unsigned char)58)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (arr_0 [i_4] [i_2]))))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [(unsigned short)14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)38128))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) <= (((/* implicit */int) var_19))))), ((-(((/* implicit */int) var_16))))))) : ((~(min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [12LL])), (var_11)))))));
                            arr_17 [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0 + 1] [i_0]), (((/* implicit */long long int) var_10))))) ? ((~(((/* implicit */int) (unsigned short)27404)))) : (min((((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (arr_7 [i_0 + 1] [0LL] [i_0 + 1])))));
                        }
                        var_25 = ((/* implicit */short) ((signed char) min(((unsigned short)27415), (arr_15 [i_0 + 1]))));
                    }
                } 
            } 
            arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_4))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-7818)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)41))) ? (((/* implicit */int) ((signed char) (short)9746))) : (((/* implicit */int) ((short) var_0))))))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_4)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0])) - (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_5] [i_8]) : (var_15)))))));
                            arr_29 [i_5] [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_8])) ? (2U) : (((/* implicit */unsigned int) var_8)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8] [(unsigned short)10] [i_5])) ^ (((/* implicit */int) (short)32758))))))))));
                            arr_30 [i_0] [i_5] [i_0] [i_6] [i_0] [i_7] [i_8] = ((/* implicit */signed char) (+(((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) % (var_11))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65529)), (360266179U))))));
        var_28 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41))))))))))));
}
