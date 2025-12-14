/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112517
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
    var_17 = ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */unsigned char) max((var_18), (var_7)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((var_11) == ((+((+(-957491943)))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (max((min((957491934), (arr_1 [2]))), (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), ((~(var_2)))))) ? (((arr_5 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_7 [i_2])))));
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1856243952)) ? (115288519) : (-864284092))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -957491943)) ? (((/* implicit */int) (_Bool)1)) : (var_13)));
                        var_25 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_2]))) : (((/* implicit */int) var_3))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (int i_5 = 3; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(var_11))))))));
                                var_27 |= -1433751800;
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_12))));
                                var_29 = (((_Bool)1) ? (((/* implicit */int) (unsigned char)233)) : (0));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) || ((_Bool)1)));
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 2) 
                {
                    {
                        var_31 = var_9;
                        var_32 = ((/* implicit */unsigned char) (+(arr_10 [i_6] [i_6] [i_6] [4ULL])));
                        var_33 = ((/* implicit */unsigned char) var_2);
                        var_34 = ((/* implicit */int) arr_5 [i_6] [i_9 - 4]);
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) ((arr_19 [i_6] [i_6] [i_7]) ? (280886700) : (((/* implicit */int) (unsigned char)128))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_36 &= (!(((/* implicit */_Bool) ((unsigned char) -1734078238))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_28 [i_6] [i_6]))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_38 -= ((unsigned short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_14))));
            var_39 = ((/* implicit */int) ((arr_22 [i_11]) - (arr_22 [i_11])));
            var_40 = ((/* implicit */int) max((var_40), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_30 [(unsigned char)0] [(unsigned char)0] [0ULL])) ? (((/* implicit */int) arr_25 [i_6] [i_6] [(unsigned short)8] [i_6] [i_11])) : (var_11))) : (((/* implicit */int) ((unsigned short) var_6)))))));
            var_41 ^= ((/* implicit */unsigned short) ((var_13) % (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -280886714)))))));
        }
    }
    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */int) (signed char)18)), (var_0))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1))));
    var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
}
