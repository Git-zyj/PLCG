/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122689
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_11 = ((((/* implicit */_Bool) (short)-2425)) ? (((/* implicit */long long int) -734203932)) : (var_9));
            var_12 = ((/* implicit */int) 9007199252643840ULL);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) 11883481616604966810ULL));
        }
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1729382256910270464ULL))));
        var_14 = ((_Bool) ((((/* implicit */_Bool) (short)-20549)) ? (((/* implicit */unsigned long long int) var_9)) : (1729382256910270464ULL)));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
        var_16 = ((/* implicit */signed char) min((min((((unsigned long long int) 734203924)), (min((((/* implicit */unsigned long long int) 1015825395)), (var_8))))), (((unsigned long long int) (signed char)112))));
        var_17 = ((/* implicit */signed char) 18437736874456907764ULL);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                arr_14 [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)4664))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */int) (short)20548)), (389736192))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)255)))))))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) -1792140924)))) : (((/* implicit */int) ((short) (_Bool)1))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) min(((short)20548), (((/* implicit */short) var_6))))))))));
    /* LoopSeq 2 */
    for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_20 = (!((((~(438721324487892036LL))) >= (((/* implicit */long long int) 33538048U)))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) (short)-20548)))));
                        }
                    } 
                } 
            } 
            arr_25 [i_5] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (short)20534)) ^ (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 3651602662180741631ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned short) ((long long int) (unsigned short)32767)))), (min((((/* implicit */unsigned int) (unsigned char)227)), (((unsigned int) (_Bool)1))))));
            var_23 = ((/* implicit */short) ((unsigned int) ((unsigned char) (+(((/* implicit */int) var_2))))));
        }
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) (~(min((((/* implicit */int) var_6)), (-751395876)))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 4) 
            {
                for (unsigned short i_13 = 3; i_13 < 18; i_13 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)629)) ? (14522722173117191427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((short) -2462765575031763235LL))))))));
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((2304717109306851328LL), (((/* implicit */long long int) (unsigned short)64916)))))));
                        arr_35 [i_5] [i_5] [i_12] [i_13] = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned long long int) 0U)), (var_3))), (((/* implicit */unsigned long long int) (unsigned short)32767)))), (((min((1265266290907234176ULL), (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 965174607)), (var_9))))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) min((var_4), (((/* implicit */long long int) (signed char)-88)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */long long int) var_6)), (-9192612234392969063LL)))))) : (((unsigned int) (unsigned short)32768)))))));
            var_28 = ((long long int) min((((/* implicit */long long int) -558865225)), (0LL)));
            var_29 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-12837)))) < (((/* implicit */int) min(((short)20530), (((/* implicit */short) (!(((/* implicit */_Bool) (short)4032))))))))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) ((long long int) (short)24576));
            arr_39 [i_5] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16582))) : (5533605922716665773LL)));
        }
        var_31 += min((((/* implicit */unsigned long long int) ((short) 2110189155))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) -751395854)) : (9251288450486399619ULL))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        var_32 += ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) -5141735490082886927LL)))));
        var_33 = ((/* implicit */unsigned char) ((short) 14931402390068722517ULL));
    }
    var_34 = ((/* implicit */int) var_2);
}
