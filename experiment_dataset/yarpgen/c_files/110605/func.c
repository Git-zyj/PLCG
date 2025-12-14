/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110605
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
    var_19 |= ((/* implicit */unsigned char) min((var_14), (var_14)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 -= ((((/* implicit */_Bool) ((int) -1581979201))) ? (((unsigned int) ((long long int) var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_3] [i_0] [i_2 + 1] [i_0] [i_3]), (var_7))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)-122))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8379434737463025213LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (11462561095551642005ULL)))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */short) var_7))))) && (((/* implicit */_Bool) min((-1581979197), (-1581979201))))));
        arr_11 [i_0] = ((/* implicit */int) var_9);
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_4 - 2] [i_4 - 1])) ? (7569935083297218843LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (var_4))))))) ? (min((((long long int) arr_7 [i_0] [i_0])), (((/* implicit */long long int) min((arr_14 [i_0] [i_0] [i_0]), (var_14)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 1]))))));
            var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8762852955566308766ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_9)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_8))) : (min((arr_12 [i_4]), (var_8)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4 - 3]))) : (arr_7 [i_0] [i_4])))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) var_8))))))));
        }
    }
    for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_14))) ? ((((-(var_12))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_5] [i_5] [i_5] [i_5 + 1] [i_5])), ((signed char)123))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)23930)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41597))) : (15LL))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_14))) ? ((((-(var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_5] [i_5] [i_5] [i_5 + 1] [i_5])), ((signed char)123))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)23930)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41597))) : (15LL)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            var_25 += ((/* implicit */unsigned short) var_7);
            arr_21 [i_5] [i_5] [14U] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_16 [(short)2])))) ? (((/* implicit */unsigned long long int) min(((+(848941505842181777LL))), (((/* implicit */long long int) ((signed char) arr_15 [i_6 + 1])))))) : (((arr_2 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) arr_17 [i_5] [i_5 + 1]))))))));
            arr_22 [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((var_13), (arr_2 [i_5])))), (var_4))), (min((((/* implicit */long long int) (+(arr_3 [i_5])))), (var_5)))));
        }
        for (int i_7 = 1; i_7 < 17; i_7 += 1) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((4603452771162820478LL), (((/* implicit */long long int) ((short) (+(var_12))))))))));
            arr_26 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 - 2] [i_5]))) : (min((var_9), (((/* implicit */unsigned long long int) var_11))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned short) ((short) arr_9 [i_5] [i_5] [i_7 + 1] [i_5 - 2] [(_Bool)1]))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (short i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = ((short) ((int) min((var_6), (((/* implicit */long long int) var_14)))));
                            var_29 = ((/* implicit */long long int) max((5298544791926816736ULL), (((/* implicit */unsigned long long int) -1197232764))));
                            arr_35 [i_5] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_5] = ((/* implicit */unsigned short) var_1);
                        }
                        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) arr_0 [i_8] [i_8]);
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((short) (short)-26468)))));
                            arr_38 [i_5] [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_7 + 2] = ((/* implicit */signed char) 4574308613114341559LL);
                        }
                        for (long long int i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            var_32 ^= ((/* implicit */int) var_9);
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), (((unsigned short) arr_6 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 1] [i_12]))));
                            arr_42 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16064664668991049129ULL)) ? (7159348049952545259LL) : (4574308613114341561LL)));
                            arr_43 [i_7 - 1] [i_5] [i_8] [i_9] [i_12 - 1] = ((/* implicit */long long int) min((((/* implicit */int) ((short) var_8))), ((+(((/* implicit */int) ((short) var_17)))))));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_0)), (var_17))))));
                        }
                        var_35 -= ((/* implicit */unsigned int) 16763279676141872161ULL);
                        var_36 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (arr_19 [i_9 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_17)))) : (min((arr_28 [i_5]), (arr_28 [i_5]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 4; i_13 < 16; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 4; i_14 < 15; i_14 += 2) 
            {
                arr_51 [i_5] [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_1))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_23 [i_5] [i_13 + 3] [i_14 - 4]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5 + 2] [i_5 - 1])))));
                var_37 = ((((_Bool) var_2)) ? (min((((/* implicit */long long int) var_7)), (var_18))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_14 - 4] [i_14] [i_14 - 4] [i_14 + 1] [i_14 + 3]))));
            }
            var_38 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) var_16)));
        }
        var_39 = ((/* implicit */unsigned long long int) arr_3 [i_5]);
    }
}
