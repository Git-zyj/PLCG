/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115435
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) 8891760014779256685ULL))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))));
            var_13 = ((/* implicit */signed char) min((max((((/* implicit */int) ((((/* implicit */unsigned long long int) 1207458321)) != (var_0)))), ((+(((/* implicit */int) (unsigned short)57344)))))), (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned int) arr_3 [i_3] [i_0]);
                        var_14 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_4 [i_3] [i_1] [i_0])), (min((arr_8 [i_0] [i_1] [i_2] [i_2] [i_0]), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0]))))))), (((unsigned long long int) var_1))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) 16606484981493340775ULL);
                    }
                } 
            } 
        }
        var_15 = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) == (max((var_8), (((/* implicit */unsigned int) (_Bool)1))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_18 [0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((1592099835094981137ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            var_16 |= ((/* implicit */signed char) var_5);
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            arr_21 [i_4] [0ULL] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) / (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_6])) : (((/* implicit */int) (unsigned char)158)))))), (((/* implicit */int) arr_9 [i_4] [i_6] [i_4] [i_6]))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) (signed char)-4))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) max((arr_26 [i_4] [i_6] [i_7] [i_8] [9ULL]), ((_Bool)0))))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (unsigned short)65521))));
                    }
                } 
            } 
            var_19 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_0 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (max((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])), (max((8891760014779256685ULL), (((/* implicit */unsigned long long int) (unsigned short)14))))))));
            arr_28 [i_4] = ((/* implicit */unsigned short) min((263882790666240ULL), (((/* implicit */unsigned long long int) 3256241674U))));
        }
        for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
        {
            var_20 &= ((/* implicit */long long int) max((((((/* implicit */int) arr_23 [i_9] [i_9] [i_9 + 1] [i_9 + 1])) / (((/* implicit */int) arr_23 [i_9] [11ULL] [i_9 + 2] [i_9 + 2])))), (((/* implicit */int) max((((/* implicit */signed char) arr_23 [i_9] [i_9] [i_9 - 1] [i_9 + 2])), (var_4))))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (long long int i_12 = 2; i_12 < 14; i_12 += 1) 
                    {
                        {
                            arr_39 [i_4] [i_12] [i_9] [11U] [i_12 - 1] [i_10] [i_9] = max((((/* implicit */unsigned long long int) var_6)), (max((var_0), (((((/* implicit */_Bool) var_3)) ? (10085899429633951294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_40 [i_4] [i_11] |= ((/* implicit */long long int) (unsigned short)18);
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned char) (+(arr_1 [i_4])));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (short)-12)), (253246117601937729ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_4)))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13] [(unsigned char)6] [i_13]))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) arr_48 [i_15] [i_15] [i_15]);
                    arr_49 [i_15] = ((/* implicit */unsigned short) var_6);
                    var_25 = var_2;
                }
            } 
        } 
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((8397603032545310564ULL), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned char) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) ? (1228378198U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_27 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (unsigned char)114)))));
    var_28 &= ((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (_Bool)1))));
}
