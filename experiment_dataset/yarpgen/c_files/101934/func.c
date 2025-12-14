/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101934
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
    var_14 *= ((/* implicit */unsigned long long int) ((signed char) max((max((((/* implicit */unsigned long long int) 2554293741344405003LL)), (2095956325458858482ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)19202)), (var_6)))))));
    var_15 = ((/* implicit */unsigned short) ((((long long int) var_3)) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_1] = ((/* implicit */long long int) ((arr_2 [i_0] [1U]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56211)))))))));
            arr_7 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (arr_0 [i_0])))) ? (5834907452505105082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((long long int) arr_0 [i_0])))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */short) (+(max((max((-6527928453009899311LL), (((/* implicit */long long int) arr_9 [i_0])))), (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), (63696320))))))));
            var_17 = ((/* implicit */signed char) arr_5 [i_0] [i_2]);
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((unsigned long long int) 10706013674011254130ULL));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) max((max((((/* implicit */short) ((2441439969878051125ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149)))))), (((short) 580319593)))), (((/* implicit */short) arr_13 [i_0]))));
        }
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_19 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)9325)), ((+(((/* implicit */int) max((arr_5 [i_5] [i_4]), (((/* implicit */unsigned short) arr_1 [i_4])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_20 += ((/* implicit */int) ((unsigned short) (+(max((2554293741344404993LL), (((/* implicit */long long int) 254)))))));
                        arr_25 [i_5] = ((/* implicit */short) (((+(max((3812933087U), (((/* implicit */unsigned int) arr_5 [i_5] [i_7])))))) << (((((arr_10 [i_4] [i_4]) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_9 [(short)10])))) & (((/* implicit */int) ((_Bool) -2554293741344405003LL)))))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_28 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -944468442)) * (5834907452505105082ULL))))));
            arr_29 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) max((max(((+(5834907452505105082ULL))), (((/* implicit */unsigned long long int) (+(657177823U)))))), (((/* implicit */unsigned long long int) max((((long long int) arr_17 [i_4])), (((/* implicit */long long int) 944468441)))))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(1096921056)))) ? (max((arr_20 [i_4] [i_8]), ((-(arr_2 [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) -956481380776797638LL))));
        }
        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_22 += ((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [i_4])) * (((/* implicit */int) arr_19 [i_4] [i_9])))), (((((/* implicit */int) arr_14 [i_4])) * (((/* implicit */int) (unsigned short)2150))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    {
                        arr_36 [i_4] [i_4] [i_4] [i_9] [(short)4] [i_9] = ((/* implicit */int) ((unsigned short) ((short) max((-1), (((/* implicit */int) arr_23 [i_4] [i_4] [i_9] [i_10] [i_11]))))));
                        var_23 = ((/* implicit */unsigned int) arr_30 [i_10] [i_11]);
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_4])), (arr_16 [i_4]))))) / (956481380776797638LL)))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 8; i_12 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2554293741344405002LL) / (arr_37 [i_12])))) ? (((((/* implicit */_Bool) (unsigned short)5792)) ? (((/* implicit */int) arr_32 [i_4] [2ULL] [i_12])) : (254))) : (((((/* implicit */_Bool) arr_12 [i_12])) ? (((/* implicit */int) (unsigned short)6982)) : (((/* implicit */int) (signed char)-24))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_12 + 3])) >= (((/* implicit */int) arr_40 [i_12 + 1]))));
            var_27 = (unsigned short)65535;
        }
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_35 [9U] [i_4]), (arr_35 [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) -625481354885818675LL)) ? (((/* implicit */int) arr_19 [i_4] [i_4])) : (((/* implicit */int) arr_16 [i_4]))))) & ((+(1125899906842623LL)))))));
        var_29 = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) arr_10 [i_4] [i_4])))));
        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned short)1), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-19224))))))))));
    }
}
