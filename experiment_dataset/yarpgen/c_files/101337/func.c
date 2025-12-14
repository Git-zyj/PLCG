/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101337
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)26)) ? (var_5) : (arr_6 [i_1 + 1]))), (((/* implicit */long long int) var_7))));
                                var_17 = ((/* implicit */unsigned int) (_Bool)1);
                                var_18 = ((/* implicit */_Bool) ((max((max((((/* implicit */int) var_4)), (var_6))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_1))))))) << (((((/* implicit */int) ((_Bool) (unsigned short)31448))) & (var_10)))));
                                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34097))) | (144106391982833664LL))), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_1 + 1] [i_1]) ? (((/* implicit */unsigned int) var_6)) : (arr_13 [i_1] [i_1] [i_1 + 1] [i_5] [i_6] [i_1 + 1] [(unsigned char)8])))) ? (max((arr_8 [i_1 + 1] [i_1] [i_6 + 2]), (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) ((((/* implicit */int) var_0)) <= (arr_15 [i_5] [i_1]))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (1257376149)))) ? (var_10) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (-65536))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (unsigned char)202);
                    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (((~(var_5))) < (((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */unsigned int) var_8))))))))));
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)10))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_7);
    var_26 = var_15;
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (unsigned short)65532)))), (var_6))) < (((/* implicit */int) var_1))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */long long int) (unsigned char)50))))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */unsigned int) max((var_7), (1033880864)))) | (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))))));
                            var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (arr_24 [i_8])))), (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) arr_20 [i_8] [i_10]))))));
                            var_30 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((var_0), ((unsigned char)188))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_7] [i_7])) : (var_10)))))));
                var_32 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10925))))) ? ((-(var_12))) : (((/* implicit */unsigned int) (-(var_6))))))));
            }
        } 
    } 
}
