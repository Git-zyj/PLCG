/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157175
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)166)) && (((((((/* implicit */_Bool) (unsigned char)166)) && (((/* implicit */_Bool) 17)))) && ((!(((/* implicit */_Bool) var_5))))))));
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)10130), ((unsigned short)0)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)56829))))))) ? (min((((/* implicit */unsigned long long int) 3155864166U)), (((((/* implicit */_Bool) (unsigned char)202)) ? (var_0) : (((/* implicit */unsigned long long int) 1650136215)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_4 = 3; i_4 < 8; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)55391));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1107)) ? (((/* implicit */unsigned int) 2085470863)) : (1139103105U)));
                            }
                            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                            {
                                arr_19 [i_0] [i_2] = ((/* implicit */signed char) (_Bool)1);
                                var_14 = ((/* implicit */unsigned long long int) min((((long long int) (signed char)1)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65525)) / (((/* implicit */int) arr_17 [i_2] [i_1] [i_2] [i_3] [i_5] [i_0])))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                            {
                                arr_22 [i_2] [i_1] [i_3] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / ((-(((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_3] [i_6]))))));
                                arr_23 [i_2] = ((/* implicit */unsigned short) (signed char)0);
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (signed char)83))));
                            }
                            arr_24 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3210910689U)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (unsigned char)218))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)14));
                            arr_26 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)235))));
                        }
                    } 
                } 
                var_16 = arr_16 [i_1];
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), (arr_30 [i_0] [i_1] [i_7] [i_7] [i_7] [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)230)) / (((/* implicit */int) (unsigned short)39709))))) ? (((/* implicit */long long int) (+(352955448U)))) : (((-8061883017063477995LL) / (((/* implicit */long long int) 2147483647))))))));
                            arr_32 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) && (arr_16 [i_7])))), (((8061883017063477977LL) >> (((17842678521574626046ULL) - (17842678521574626028ULL)))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned short)9752))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_0] [i_7] [i_1] [i_0]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_0] [i_8] [i_8]))) : (6569041415747102603LL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (((~(((9828595494645834665ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_0])))));
                            var_20 = ((unsigned short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (unsigned char)247))))) == (-1062655773123152230LL)));
                            arr_40 [i_9] [i_1] [i_9] = ((/* implicit */unsigned int) (_Bool)1);
                            var_21 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
}
