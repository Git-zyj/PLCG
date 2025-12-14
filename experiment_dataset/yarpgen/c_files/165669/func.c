/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165669
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-918633420939148088LL))), (((/* implicit */long long int) (unsigned short)25014)))), (min((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (2147483647)))), (-918633420939148086LL)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_19 &= ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((unsigned short) var_4))), (var_15)))));
            var_20 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) arr_2 [i_1])))));
            arr_4 [i_1] [i_0] = ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((/* implicit */int) var_10)));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_8 [i_0] [21U] = ((/* implicit */short) min((((-2147483647) + (((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-9)) && (((/* implicit */_Bool) var_17))))))));
            var_21 = ((/* implicit */_Bool) var_2);
            var_22 = ((/* implicit */signed char) min((min((((unsigned int) arr_7 [i_2] [i_2] [i_2])), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_2]))))))), (((/* implicit */unsigned int) arr_6 [i_2] [i_2] [18]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 4; i_3 < 22; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [i_3 - 2])) ? (var_2) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_7 [i_3 - 1] [i_3] [i_3 - 3]))));
                        var_24 |= ((/* implicit */signed char) min((min((((int) 13510798882111488ULL)), (((/* implicit */int) arr_10 [i_4] [i_2] [i_3])))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)19487)) && (((/* implicit */_Bool) 13510798882111485ULL))))))));
                    }
                } 
            } 
        }
        arr_13 [i_0] = ((/* implicit */long long int) 2147483647);
    }
    for (long long int i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (short)-22413)), (2934231581U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 - 1] [i_5] [i_5 - 2])))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [14U] [i_5 + 1] [(_Bool)1] [i_5 + 1] [i_5 + 1] [i_5]))))) & (min((13510798882111475ULL), (((/* implicit */unsigned long long int) var_13))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)30599), (((/* implicit */unsigned short) (signed char)-29))))) - (((/* implicit */int) (signed char)-34))))) & (918633420939148073LL)));
                            var_27 = ((/* implicit */_Bool) arr_19 [i_6] [i_5]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) 3637246396U))), (14318869880973119522ULL)));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3105599955022980586LL)) && (((/* implicit */_Bool) (short)32767)))));
                arr_31 [i_5] [i_6] [(unsigned char)14] = ((/* implicit */int) ((((/* implicit */int) arr_3 [i_10] [i_6] [i_5])) != (((/* implicit */int) arr_3 [i_5 - 1] [i_6] [i_10]))));
                arr_32 [i_10] [i_5] = ((/* implicit */int) (-(1931591815U)));
                var_30 = (!(((/* implicit */_Bool) 1931591810U)));
            }
            arr_33 [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1283968627)) ? (3163881554088814702LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21949)))));
            arr_34 [i_5 - 2] [i_5 - 1] = ((/* implicit */int) arr_18 [i_5]);
            var_31 *= ((/* implicit */signed char) (((~(((/* implicit */int) (!((_Bool)0)))))) != (((/* implicit */int) arr_2 [i_6]))));
        }
        arr_35 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */long long int) ((short) min((((/* implicit */int) arr_10 [i_5 - 2] [i_5 + 1] [i_5])), (var_6))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5 - 3] [11U] [3U]))))) ? (arr_5 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) 22594187))))));
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */long long int) var_7);
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    arr_44 [i_11] [i_12] [16ULL] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-22415)) + (2147483647))) << (((((((/* implicit */_Bool) (short)22413)) ? (((/* implicit */long long int) var_2)) : (arr_36 [i_12]))) - (1703883797LL)))))) ? (((/* implicit */long long int) var_5)) : (arr_36 [i_11])));
                    arr_45 [i_12] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)1023)))) * ((+((~(((/* implicit */int) arr_40 [23LL] [i_12] [i_13]))))))));
                    var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (min((((/* implicit */unsigned int) max((((/* implicit */short) var_17)), ((short)-1018)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)22398))) & (7U)))))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) min((var_11), (((/* implicit */unsigned int) (short)127)))))) <= (-918633420939148048LL)));
                    var_34 = ((/* implicit */unsigned char) ((2124406789U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))));
                }
            } 
        } 
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) min((-5322829342050498785LL), (((/* implicit */long long int) var_7))))), (((unsigned long long int) 13835058055282163712ULL))))))));
        var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5322829342050498784LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_38 [i_11])))) : (min((((/* implicit */long long int) 1665983338)), (5322829342050498786LL)))))));
    }
    var_37 *= ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) % (3163881554088814702LL))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((-4228095044118201482LL) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (min(((unsigned char)233), (((/* implicit */unsigned char) var_17)))))))));
}
