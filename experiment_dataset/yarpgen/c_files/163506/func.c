/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163506
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
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_13))));
    var_20 = ((/* implicit */_Bool) (signed char)109);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((var_0), ((signed char)-67)))) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19759)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((max((max((-1701166806), (((/* implicit */int) (signed char)58)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))), ((+(((/* implicit */int) ((((/* implicit */int) (signed char)-110)) < (((/* implicit */int) var_14)))))))));
        arr_5 [i_0] = ((/* implicit */signed char) 18446744073709551615ULL);
        arr_6 [i_0] [4U] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_2 [i_0])))), (min((((((/* implicit */int) var_1)) & (((/* implicit */int) var_12)))), ((~(((/* implicit */int) var_11))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2]))));
            arr_13 [i_2] = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)45777));
            arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [(unsigned short)9] [i_1]))) % (15484265889586384591ULL)))));
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned char) ((684302593) <= (((/* implicit */int) var_1))));
                            arr_24 [i_1] [i_2] = ((/* implicit */short) ((signed char) var_15));
                            arr_25 [i_2] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_2 [5])) << (((((var_3) + (95779070))) - (11)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_31 [i_1] [i_2] [i_2] [11U] = ((/* implicit */signed char) ((short) ((_Bool) (signed char)109)));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (arr_21 [i_2] [i_2] [(signed char)3] [i_7])))) >= (arr_30 [(short)9] [(_Bool)1] [i_6] [i_6] [i_6] [i_6])));
                        arr_32 [i_1] [i_2] [i_1] [i_2] [(unsigned short)6] [i_2] = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) var_5);
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((4294967291U), (2634494023U))))));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))))) ? (max((max((arr_3 [i_1] [1]), (((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [(short)8])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [(short)0])), (arr_18 [i_1] [i_1] [4U] [(unsigned short)0] [i_1])))))) : (((/* implicit */unsigned long long int) (-(var_10))))));
        arr_35 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)13320))));
        var_27 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)2029)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_30 [8] [i_1] [6LL] [i_1] [6LL] [i_1]))))) ? (((((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) (unsigned short)52215))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_1]))))) : (max((((/* implicit */unsigned long long int) min((var_18), (((/* implicit */int) arr_34 [i_1] [i_1]))))), (arr_16 [(_Bool)1] [(signed char)8]))));
        var_28 = ((/* implicit */int) ((long long int) var_8));
    }
    var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) max((((/* implicit */int) var_2)), (var_18)))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) * (var_17))))) / (((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (var_10))) >> (((((/* implicit */int) var_9)) - (48829))))))));
}
