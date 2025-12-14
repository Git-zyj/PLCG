/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103457
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
    var_18 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) 5489101321419646036LL));
        arr_3 [i_0] = ((/* implicit */unsigned short) 1880021309U);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (5852148132298304331LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) 5489101321419646036LL);
            arr_11 [i_1 - 3] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) -5489101321419646037LL);
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((3215996271547241327LL), (((/* implicit */long long int) (short)8192))));
                        arr_17 [i_1] [i_1] [i_3] [(signed char)10] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (short)8192)), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)109)), ((short)8183)))) ? (((/* implicit */int) (_Bool)1)) : (-1870262949)))));
                    }
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_21 [i_1] [5ULL] = arr_6 [i_1];
            arr_22 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)109)), (6828911559669864272LL)));
            arr_23 [i_1] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)110));
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_26 [i_6] [i_6] [i_6] = ((_Bool) arr_7 [i_1 + 1] [i_1 + 1]);
            arr_27 [i_1] [i_1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) -307636823480427230LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((_Bool) (signed char)-115))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    {
                        arr_33 [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (short)8183)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)145))))))), (max((2395277601200867790LL), (((long long int) 1473775342U))))));
                        arr_34 [i_1] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) max((((signed char) (unsigned char)174)), (var_17)));
                        arr_35 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_18 [i_1] [(unsigned short)13])))) ? (arr_28 [i_1]) : (((/* implicit */unsigned long long int) 6828911559669864272LL)))));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            arr_38 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)128)), (var_7)))) ? (var_16) : (((/* implicit */long long int) min((arr_1 [i_9]), (((/* implicit */unsigned int) (unsigned short)17716))))))));
            arr_39 [i_9] [(signed char)8] [i_9] = ((/* implicit */unsigned long long int) 5852148132298304353LL);
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        arr_45 [i_1] [i_1] = ((/* implicit */int) arr_19 [i_1] [i_11]);
                        arr_46 [i_1] [i_1] [i_10] [i_10] = ((_Bool) (unsigned short)47819);
                        arr_47 [(unsigned char)10] [i_9] [(unsigned char)10] [i_1] = ((/* implicit */int) ((unsigned short) ((unsigned char) (unsigned short)2016)));
                        arr_48 [i_1] [i_1] [i_11] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)2016);
                        arr_49 [i_1 + 1] [i_9] [i_10] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) (_Bool)1))), (max((((/* implicit */long long int) arr_30 [i_1] [i_1] [i_1])), (4634959876439012647LL)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))));
                    }
                } 
            } 
        }
        arr_50 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) (unsigned short)17716)))), (min((((/* implicit */unsigned long long int) 1525133462)), (3397967099742345067ULL)))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_62 [i_1] [i_1] = ((/* implicit */long long int) 402653184);
                        arr_63 [i_14] [i_1] [i_1] [5U] = ((/* implicit */unsigned short) ((unsigned int) 4634959876439012655LL));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                        {
                            {
                                arr_70 [i_1] [i_1] [i_13] [i_12] [i_16] [i_12] = ((/* implicit */unsigned char) 35184363700224LL);
                                arr_71 [i_1] [1] [i_13] [i_13] [i_15] [i_1] = ((/* implicit */unsigned char) 15048776973967206548ULL);
                                arr_72 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_16])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)95)), (min((4255719960U), (((/* implicit */unsigned int) var_8))))))) : (-4634959876439012660LL)));
                            }
                        } 
                    } 
                    arr_73 [i_12] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        for (signed char i_18 = 4; i_18 < 11; i_18 += 1) 
                        {
                            {
                                arr_79 [i_1] [i_1] [i_1] [i_13] [i_12] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) (unsigned short)16076);
                                arr_80 [i_1] = ((/* implicit */short) (signed char)25);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_81 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (-7738671960552628447LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (3397967099742345087ULL)));
        arr_82 [(signed char)8] = ((/* implicit */unsigned char) 1167896253335500798ULL);
    }
    var_19 |= ((/* implicit */unsigned long long int) (_Bool)1);
}
