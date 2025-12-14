/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129276
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
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_16)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) || (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                    var_19 = ((/* implicit */unsigned int) (+((+((-(((/* implicit */int) (short)-5317))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) var_16);
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)28))))) + (min((var_1), (((/* implicit */unsigned long long int) (short)17358)))))) + (max((arr_5 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (arr_11 [i_3] [(unsigned short)10]))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), ((+(3378353582U)))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_19 [i_4] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), ((unsigned short)24515))))))));
            arr_20 [i_4] [(short)6] = ((/* implicit */short) ((_Bool) ((unsigned long long int) var_7)));
            var_21 = ((/* implicit */short) min((((arr_5 [i_4]) + (arr_5 [i_5]))), (((/* implicit */unsigned long long int) var_8))));
        }
        arr_21 [(unsigned short)2] = ((/* implicit */short) (((+(arr_17 [i_4] [i_4]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4])) && (((/* implicit */_Bool) arr_5 [i_4]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)41021))) : (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255)))))));
        var_23 = ((short) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) && (((/* implicit */_Bool) min((916613714U), (((/* implicit */unsigned int) (unsigned short)62205)))))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) var_10);
                arr_30 [i_8] [i_8] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-8446)), (13583278874295877983ULL)));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) 18446744073709551604ULL);
                            arr_38 [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_33 [i_6] [i_7] [i_8] [i_9] [i_8])), (arr_22 [i_6])))) >> (((((((/* implicit */int) (unsigned short)50351)) / (((/* implicit */int) arr_22 [i_6])))) - (13)))));
                        }
                    } 
                } 
                arr_39 [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_6 [i_8])))) ? (((/* implicit */int) arr_37 [i_6] [i_7] [i_6])) : (((/* implicit */int) ((_Bool) arr_6 [i_6])))));
            }
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_31 [i_6] [(unsigned char)12] [i_6]))));
            var_27 |= ((/* implicit */long long int) (+(min((((/* implicit */int) arr_29 [i_7] [6U])), (((int) (short)5316))))));
            arr_40 [i_7] = (unsigned short)0;
        }
        arr_41 [i_6] = ((/* implicit */int) (unsigned short)41001);
    }
}
